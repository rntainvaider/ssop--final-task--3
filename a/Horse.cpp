#include "library.h"
#include "Horse.h"

Horse::Horse(std::string name, int age, double massa):Mammalia(name, age, massa)
{
	this->name = name;
	this->age = age;
	this->massa = massa;
}

void Horse::printInfo()
{
	std::cout << "Лошадь: " << name << std::endl;
	std::cout << "Возраст: " << age << " лет" << std::endl;
	std::cout << "Вес: " << massa << " кг" << std::endl;
}

void Horse::jump() 
{
	std::cout << name << " совершает высокий прыжок через препятствие!" << std::endl;
}

void Horse::makeSound() 
{
	std::cout << name << " ржет: Иго-го-го-го!" << std::endl;
}