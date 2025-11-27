#include "library.h"
#include "Pisces.h"

Pisces::Pisces(std::string name, int age, double massa)
{
	this->name = name;
	this->age = age;
	this->massa = massa;
}

void Pisces::printInfo() 
{
	std::cout << "Рыба: " << name << std::endl;
	std::cout << "Возраст: " << age << " лет" << std::endl;
	std::cout << "Вес: " << massa << " кг" << std::endl;
}

void Pisces::swim() 
{
	std::cout << name << " грациозно плавает в воде." << std::endl;
}

void Pisces::makeSound() 
{
	std::cout << name << " булькает: Буль-буль-буль!" << std::endl;
}