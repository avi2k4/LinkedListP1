#include <iostream>
#include "student.h"

Student::Student(char * firstName, char * lastName, int id, double gpa) {
	std::strcpy(this->firstName, firstName);
	std::strcpy(this->lastName, lastName);
	this->id = id;
	this->gpa = gpa;
}

Student::~Student() { }

char * Student::getFirstName() {
	return this->firstName;
}

char * Student::getLastName() {
	return this->lastName;
}

int Student::getID() {
	return this->id;
}

double Student::getGPA() {
	return this->gpa;
}

void Student::print() {
	std::cout << "Name: " << this->firstName << " " << this->lastName << std::endl;
	std::cout << "ID: " << this->id << std::endl;
	std::cout << "GPA: " << this->gpa << std::endl;
}
