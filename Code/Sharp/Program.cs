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
    }

    public class Program
    {
        public static void Main()
        {
            Console.WriteLine("Это вспомогательный метод, тесты запускаются через Test Explorer!");
        }
    }
}
