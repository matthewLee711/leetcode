#include <iostream>

class Node {
public:
  Node * left;
  Node * right;
  int data;
  Node(int data);
  void setLeft(Node * left);
  void setRight(Node * right);
  void setData(int data);
  int getData(int data);
};

void Node::Node(int data) {
  left = nullptr;
  right = nullptr;
  this->data = data;
}

void Node::setLeft(Node * left) {
  this->left = left;
}

void Node::setRight(Node * right) {
  this->right = right;
}

void Node::setData(int data) {
  this->data = data;
}

class BST {
  Node * root;
  void addLeaf(Node * leaf);
  void printPostTraversal();
  void printPreTraversal();
  void removeLeaf();
};

void BST::addLeaf(Node * leaf) {

}
