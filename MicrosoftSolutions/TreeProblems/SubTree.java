//write an algorithm to detect if T2 is a subtree of T1
class SubTree {
  Node root;

  public SubTree() {
    root = null;
  }

  //Recursive insertion pt1 -- might not need this
  public void insertR(int data) {
    root = insertR(root, data);
  }
  //Recursive insertion pt2
  public Node insertR(Node node, int data) {
    if(node == null) {
      node = new Node(data);
    }
    else {
      if(data <= node.data) {
        node.left = insertR(node.left, data);
      }
      else {
        node.right = insertR(node.right, data);
      }
    }
    return node;
  }

  public void inorder(Node node) {
    if(node != null) {
      inorder(node.left);
      System.out.println(node.data);
      inorder(node.right);
    }
  }

  public void preorder(Node node) {
    if(node != null) {
      System.out.println(node.data);
      inorder(node.left);
      inorder(node.right);
    }
  }

  public void postorder(Node node) {
    if(node != null) {
      inorder(node.left);
      inorder(node.right);
      System.out.println(node.data);
    }
  }



  class Node {
    Node left;
    Node right;
    int data;

    public Node(int data) {
      this.data = data;
      this.left = null;
      this.right = null;
    }
  }

  public static void main(String[] args) {
    SubTree tree1 = new SubTree();
    SubTree subtree = new SubTree();
    int[] arr1 = {0,1,2,3,4,5,6};
    int[] arr2 = {1,2,3};
    for(int data : arr1) {
      tree1.insertR(data);
    }
    for(int data : arr2) {
      subtree.insertR(data);
    }

    // tree1.inorder(tree1.root);
    // subtree.inorder(subtree.root);
    // tree1.preorder(tree1.root);
    // tree1.postorder(tree1.root);
  }
}
