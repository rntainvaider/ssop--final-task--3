#pragma once
#include "Insecta.h"

class Arachnida : public Insecta
{
public:
	Arachnida(std::string name, int age, double massa);

	void printInfo();
	void weaveWeb();
	void makeSound();
};