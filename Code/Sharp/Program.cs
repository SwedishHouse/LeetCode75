using System;

namespace Sharp
{

    public class Solution
    {
        public string MergeAlternately(string word1, string word2)
        {
            char[] letters = new char[word1.Length + word2.Length];

            string larger_string = word1.Length >= word2.Length ? word1 : word2;

            int min_size = Math.Min(word1.Length, word2.Length);
            int least = Math.Max(word1.Length, word2.Length) - min_size;

            int counter = 0;
            for (int i = 0; i < min_size; ++i)
            {
                letters[counter++] = word1[i];
                letters[counter++] = word2[i];
            }

            for (int i = 0; i < least; i++)
                letters[counter++] = larger_string[min_size + i];

            return new string(letters);
        }

        public string GcdOfStrings(string str1, string str2)
        {
            if (str1 + str2 != str2 + str1)
                return "";

            int len1 = str1.Length, len2 = str2.Length;

            while(len1 != len2)
            {
                if(len1 > len2)
                    len1 -= len2;
                else
                    len2 -= len1;
            }

            return str1.Substring(0, len1);
        }

        public IList<bool> KidsWithCandies(int[] candies, int extraCandies)
        {
            int maxValue = candies.Max();

            List<bool> res = new List<bool>(new bool[candies.Length]);
            for (int i = 0; i < candies.Length; ++i)
            {
                res[i] = candies[i] + extraCandies >= maxValue;
            }
            return res;

        }

        public bool CanPlaceFlowers(int[] flowerbed, int n)
        {
            int counter = 0;

            for (int i = 0; i < flowerbed.Length; ++i)
            {
                if (flowerbed[i] == 0)
                    if((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.Length - 1 || flowerbed[i + 1] == 0))
                    {
                        flowerbed[i] = 1;
                        if (++counter >= n) return true;
                    }
            }

            return counter >= n;
        }

        public string ReverseVowels(string s)
        {
            bool IsVowel(char x)
            {
                return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U';
            }

            char[] sb = s.ToCharArray();
            int start = 0, end = s.Length - 1;

            while (start < end)
            {
                while (start < end && !IsVowel(sb[start])) start++;
                while (start < end && !IsVowel(sb[end])) end--;

                char temp = sb[start];
                sb[start] = sb[end];
                sb[end] = temp;
                start++;
                end--;
            }
            return new String(sb);
        }

    }

    public class Program
    {
        public static void Main()
        {
            Console.WriteLine("Это вспомогательный метод, тесты запускаются через Test Explorer!");
        }
    }
}
