//check if linked list is a palindrome

//Solution 1: O(n) O(n)
//If singly linked list
//reverse the linked list (use stack)
//compare it to the original

//Solution 2: O(n) O(1)
//if doubly linked list
// start from tail and iterate to middle


//solution 1 function
//
public Boolean reverse() {
  Stack<Node> store = new Stack<Node>();
  Node current = head;
  while(current != null) {
    store.push(current);
    current = current.next;
  }
  currrent = head;
  while(current != null {
    if(current.data != store.pop()) {
      return false;
    }
  }

}
