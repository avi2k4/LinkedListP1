#include <iostream>
#include "node.h"
#include "student.h"

void print(Node * node);

int main() {
	char name1[] = "Avi";
	Student * first = new Student(name1);
	Node * head = new Node(first);

	char name2[] = "Blevins";
	Student * second = new Student(name2);
	Node * next = new Node(second);

	head->setNext(next);

	print(head);

	return 0;
}

void print(Node * node) {
	std::cout << node->getStudent()->getName() << std::endl;

	if (node->getNext() != NULL) {
		print(node->getNext());
	}
}
