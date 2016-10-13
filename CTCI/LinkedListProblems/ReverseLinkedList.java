//reverse a linked list

//Solution 1:
//

class ReverseLinkedList {
  public Node head = null;

  public void reverse() {
    if (start == null) {
        return;
    }
    Node current = head;
    Node after = head.next;
    while (after != null) {
        Node tmp = after.next; // preserve what will come later.
        after.next = current;  // reverse the pointer
        current = after;       // advance the cursor
        after = tmp;           // the node after is the one preserved earlier.
    }
    head.next = null;         // null-out next on what was the head element
    head = current;           // move the start to what was the end.
  }

  public void add(int data) {
    if(head == null) {
      head = new Node(data);
    }
    else {
      Node current = head;
      while(current.next != null) {
        current = current.next;
      }
      current.next = new Node(data);
    }
  }
  class Node {
    Node next;
    int data;
    public Node(int data) {
      this.data = data;
      this.next = null;
    }
  }

  public static void main(String[] args) {

  }
}
