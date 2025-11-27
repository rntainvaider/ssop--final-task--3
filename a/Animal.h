#pragma once
#include "library.h"

class Animal
{
protected:
	std::string name;
	int age;
	double massa;
public:
	std::string getName() { return name; };
	int getAge() { return age; };
	double getMassa() { return massa; };

	void setName(std::string value) { name = value; };
	void setAge(int value) { age = value; };
	void setMassa(double value) { massa = value; };
};

