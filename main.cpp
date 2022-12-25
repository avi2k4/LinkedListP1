#include <iostream>
#include "node.h"
#include "student.h"

void print(Node * node);

int main() {
	char name1[] = "Avi";
	char name2[] = "Moane";
	Student * first = new Student(name1, name2, 1234, 42.320432);
	Node * head = new Node(first);

	print(head);

	return 0;
}

void print(Node * node) {
	if (node != NULL) {
		node->getStudent()->print();
		print(node->getNext());
	}
}
