#pragma once
#include "Animal.h"

class Pisces : public Animal
{
public:
	Pisces(std::string name, int age, double massa);

	void printInfo();
	void swim();
	void makeSound();
};