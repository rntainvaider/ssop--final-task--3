#include "library.h"
#include "Horse.h"

Horse::Horse(std::string name, int age, double massa):Mammalia(name, age, massa)
{
	this->name = name;
	this->age = age;
	this->massa = massa;
}