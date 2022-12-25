#include <iostream>
#include "node.h"
#include "student.h"

Node::Node(Student * student) {
	this->student = student;
	this->next = NULL;
}

Node::~Node() {
	delete &(this->student);
	next = NULL;
}

Student * Node::getStudent() {
	return this->student;
}

void Node::setNext(Node * node) {
	this->next = node;
}

Node * Node::getNext() {
	return this->next;
}
