#include <iostream>
#include "student.h"

Student::Student(char * name) {
	std::strcpy(this->name, name);
}

Student::~Student() { }

char * Student::getName() {
	return this->name;
}
