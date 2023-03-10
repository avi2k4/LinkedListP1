#include <iostream>
#include <cstring>
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

/*
 * Student getter
 */
Student * Node::getStudent() {
	return this->student;
}

/*
 * Node setter
 */
void Node::setNext(Node * node) {
	this->next = node;
}

/*
 * Node getter
 */
Node * Node::getNext() {
	return this->next;
}
