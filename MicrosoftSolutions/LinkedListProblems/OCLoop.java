//loop in list, and detect start of it
// <HAVENT TESTED>
class OCLoop {
  public Node head;
  public OCLoop() {
    this.head = null;
  }
  //add to back
  public void addToBack(int data) {
    Node newNode = new Node(data);
    if(head == null) {
      this.head = newNode;
    }
    else {
      Node current = head;
      while(current.next != null) {
        current = current.next;
      }
      current.next = newNode;
    }

  }

  public void hasCycle() {
    Node fast = head;
    Node slow = head;
    while(fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;

      if(slow == fast) {
        return true;
      }
    }
    return false;
  }

  //Node for each link
  class Node {
    public Object data;
    public Node next;

    public Node(Object data) {
      this.data = data;
      this.next = null;
    }
  }

  public static void main(String[] args) {
    OCLoop test = new OCLoop();
    int[] stuff = {4, 6, 7, 8, 5};

    for(int insert : stuff) {
      test.addToBack(insert);
    }

  }
}
