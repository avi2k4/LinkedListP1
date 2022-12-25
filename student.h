#pragma once

#include <iostream>

class Student {
	public:
		Student(char * name);
		~Student();

		char * getName();

	private:
		char name[50];
};
