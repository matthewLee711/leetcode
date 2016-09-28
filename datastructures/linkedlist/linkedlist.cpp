#include <iostream>
using namespace std;

class Node {
public:
	Node * next;
	int info;
	Node();
	Node(int info);
	void setNext(Node * next);
	void setInfo(int info);
	Node * getNext();
	int getInfo();
};

Node::Node() {
	this->next = nullptr;
	this->info;
}

Node::Node(int info) {
	this->next = nullptr;
	this->info = info;
}

void Node::setNext(Node * next) {
	this->next = next;
}

void Node::setInfo(int info) {
	this->info = info;
}

Node * Node::getNext() {
	return this->next;
}

int Node::getInfo() {
	return this->info;
}

int main() {
	int arr [5] = { 0, 1, 2, 3, 4 };
	Node * head = nullptr;
	Node * current = nullptr;

	//Adding items to linked list
	for (int i = 0; i < 5; i++) {
		if (head == nullptr) {
			head = new Node(); // create head node
			head->setInfo(arr[i]); // set head info to arr num
			current = head; // get current to point to head
		}
		else {
			Node * n = new Node(arr[i]);
			current->setNext(n);
			current = current->getNext();
		}
	}

	current = head;
	//printed linked list
	while (current != nullptr) {
		cout << current->getInfo() << endl;
		current = current->getNext();
	}

}
