#pragma once
#include "Mammalia.h"
class Horse : public Mammalia
{
public:
	Horse(std::string name, int age, double massa);

	void printInfo();
	void jump();
	void makeSound();
};

