//http://www.sanfoundry.com/java-program-implement-binary-search-tree/
class BST {
  Node root;

  public BST() {
    root = null;
  }

  //Iterative insert
  public void insert(int data) {
    Node leaf = new Node(data);
    if(root == null) {
      root = leaf;
    }
    else {
      Node current = root;
      while(current.left != null || current.right != null) {
        if(leaf.data < current.data) {
          current = current.left;
        }
        else if(leaf.data > current.data) {
          current = current.right;
        }
        else {
          System.out.print("Duplicate Node");
        }
      }
      ///TODO
      //write code to do do insertion
    }
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
    BST tree = new BST();
    tree.insertR(new Integer(5));
    tree.inorder(tree.root);
    tree.preorder(tree.root);
    tree.postorder(tree.root);
  }
}
