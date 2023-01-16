/*
Linked List by Avighnash Kumar
Implementation of linked list in C++
*/

#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

void print(Node * node);

int main() {
	char name1[] = "Tyler";
	char name2[] = "Blevins";
	Student * first = new Student(name1, name2, 396333, 3.7524);
	Node * head = new Node(first);

	char name3[] = "John";
	char name4[] = "Doe";
	Student * second = new Student(name3, name4, 204222, 4.00);
	Node * next = new Node(second);

	head->setNext(next);

	print(head);

	return 0;
}

void print(Node * node) {
	if (node != NULL) {
		node->getStudent()->print();
		print(node->getNext());
	}
}
