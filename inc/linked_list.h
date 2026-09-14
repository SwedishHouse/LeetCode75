

class linked_list
{
public:
    // Definition for singly-linked list.
	struct ListNode 
	{
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	// 206. Reverse Linked List
	ListNode* reverseList(ListNode* head);
};
