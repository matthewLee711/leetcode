//reverses linked list, starting with null as new head.
ListNode * reverseList(ListNode * head) {
    if(head == nullptr || head.next = nullptr) {
      return head;
    }
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != null) {
        ListNode* nextTemp = curr.next;
        curr.next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}
