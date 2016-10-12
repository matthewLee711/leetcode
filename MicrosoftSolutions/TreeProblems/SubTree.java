//Solution 1: O(n) space O(1)
//write an algorithm to detect if T2 is a subtree of T1
//to do this, find the postorder and inorder of both trees
//Store answer into string, and use .contains
//http://algorithms.tutorialhorizon.com/given-two-binary-trees-check-if-one-binary-tree-is-a-subtree-of-another/
// <HAVNT TESTED>
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
  //           5
  //         /   \
  //       3      7
  //     /   \   /
  //    2     4 6
  //   /
  // 1
  //printing tree in order
  public void inorder(Node node) {
    if(node != null) {
      inorder(node.left);
      System.out.println(node.data);
      inorder(node.right);
    }
  }
  //root -> left -> right (all from top to bottom)
  public void preorder(Node node) {
    if(node != null) {
      System.out.println(node.data);
      preorder(node.left);
      preorder(node.right);
    }
  }
  //printing tree left bottom leafs -> root -> right bottom leafs
  public void postorder(Node node) {
    if(node != null) {
      postorder(node.left);
      postorder(node.right);
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
    int[] arr1 = {5,3,2,1,4,7,6};
    int[] arr2 = {1,2,3};
    for(int data : arr1) {
      tree1.insertR(data);
    }
    for(int data : arr2) {
      subtree.insertR(data);
    }
    //           5
    //         /   \
    //       3      7
    //     /   \   /
    //    2     4 6
    //   /
    // 1
    tree1.inorder(tree1.root);
    System.out.println("----");
    //subtree.inorder(subtree.root);
    System.out.println("----");
    tree1.postorder(tree1.root);
    System.out.println("----");
    tree1.preorder(tree1.root);
    System.out.println("----");
  }
}
