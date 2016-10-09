//loop in list, and detect start of it

class basicLinkedList {
  public Node head;
  public basicLinkedList() {
    this.head = null;
  }

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

  class Node {
    public Object data;
    public Node next;

    public Node(Object data) {
      this.data = data;
      this.next = null;
    }
  }

  public static void main(String[] args) {
    basicLinkedList test = new basicLinkedList();
    int[] stuff = {4, 6, 7, 8, 5};

    for(int insert : stuff) {
      test.addToBack(insert);
    }

  }
}
