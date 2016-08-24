// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* output = new ListNode(0);
		while (l1 != nullptr || l2 != nullptr) {
			if (l1->val + l2->val >= 10) {
				output->val = (l1->val + l2->val) % 10;
			}
			else {
				output->val = l1->val + l2->val;
			}
			output->next = new ListNode(0);
			output = output->next;
			l1->next;
			l2->next;
		}
		return output;
	}
};
