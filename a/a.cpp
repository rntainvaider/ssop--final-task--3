//Реализовать иерархию классов, содержащих поля и методы.Написать
//программный код, демонстрирующий работу классов.Для построения иерархии
//использовать следующие сущности предметной области : животное, млекопитающее,
//лошадь, рыбы, насекомые, пауки.
#include "Horse.h"
#include "Pisces.h"
#include "Arachnida.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
    Horse* horseBuc = new Horse("Буцефал", 6, 190);
    cout << "Информация о лошади:" << endl;
    horseBuc->printInfo();
    horseBuc->jump();
    horseBuc->makeSound();
    cout << endl;
    delete horseBuc;

    Arachnida* spiderSpi = new Arachnida("Паучок", 6, 0.5);
    cout << "Информация о пауке:" << endl;
    spiderSpi->printInfo();
    spiderSpi->weaveWeb();
    spiderSpi->makeSound();
    cout << endl;
    delete spiderSpi;

    Pisces* piscesPis = new Pisces("Немо", 2, 0.3);
    cout << "Информация о рыбе:" << endl;
    piscesPis->printInfo();
    piscesPis->swim();
    piscesPis->makeSound();
    cout << endl;
    delete piscesPis;
}


