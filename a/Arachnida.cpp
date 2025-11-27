#include "library.h"
#include "Arachnida.h"

Arachnida::Arachnida(std::string name, int age, double massa):Insecta(name, age, massa)
{
	this->name = name;
	this->age = age;
	this->massa = massa;
}