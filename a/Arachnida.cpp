#include "library.h"
#include "Arachnida.h"

Arachnida::Arachnida(std::string name, int age, double massa):Insecta(name, age, massa)
{
	this->name = name;
	this->age = age;
	this->massa = massa;
}

void Arachnida::printInfo()
{
	std::cout << "Паук: " << name << std::endl;
	std::cout << "Возраст: " << age << " месяцев" << std::endl;
	std::cout << "Вес: " << massa << " грамм" << std::endl;
}

void Arachnida::weaveWeb() 
{
	std::cout << name << " плетет красивую паутину!" << std::endl;
}

void Arachnida::makeSound() 
{
	std::cout << name << " издает тихое шипение..." << std::endl;
}