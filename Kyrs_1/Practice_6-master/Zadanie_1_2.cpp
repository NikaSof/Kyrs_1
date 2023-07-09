#include <iostream>
#include "Cone.h"
#include <windows.h>
#include <locale>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Cone c1(3, 7);              // Конус с центром в начале координат с радиусом 3 и выcотой 7
    Cone c2(1, 2, 3, 5, 10);    // Произвольный конус

    std::cout << "Конус 1: " << c1;
    std::cout << "Площадь поверхности: " << c1.area() << "\n";
    std::cout << "Объем: " << c1.volume() << "\n";

    std::cout << "Конус 2: " << c2;
    std::cout << "Площадь поверхности: " << c2.area() << "\n";
    std::cout << "Объем: " << c2.volume() << "\n";

    Trank_Cone k1(4, 3, 7);              // Конус с центром в начале координат с радиусом 3 и выcотой 7
    Trank_Cone k2(1, 2, 3, 5, 2, 10);    // Произвольный конус

    std::cout << "Усечённый конус 1: " << k1;
    std::cout << "Площадь поверхности : " << k1.area() << "\n";
    std::cout << "Объем: " << k1.volume() << "\n";

    std::cout << "Усечённый конус 2: " << k2;
    std::cout << "Площадь поверхности: " << k2.area() << "\n";
    std::cout << "Объем: " << k2.volume() << "\n";

    return 0;
}