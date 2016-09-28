// Definition for singly-linked list.
//PROGRAM: 7 -> 3 -> 2
//        10 -> 4 -> 5
//       = 7 -> 7 -> 7
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* output = new ListNode(0);
    ListNode* head = output;
		while (l1 != nullptr || l2 != nullptr) {
			if (l1->val + l2->val >= 10) {
				output->val = (l1->val + l2->val) % 10;
			}
			else {
				output->val = l1->val + l2->val;
			}
			output->next = new ListNode(0);
			output = output->next;
			l1 = l1->next;
			l2 = l2->next;
		}
		return output;
	}
};
