#include <iostream>
#include "Cone.h"
#include <windows.h>
#include <locale>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Cone c1(3, 7);              // ����� � ������� � ������ ��������� � �������� 3 � ��c���� 7
    Cone c2(1, 2, 3, 5, 10);    // ������������ �����

    std::cout << "����� 1: " << c1;
    std::cout << "������� �����������: " << c1.area() << "\n";
    std::cout << "�����: " << c1.volume() << "\n";

    std::cout << "����� 2: " << c2;
    std::cout << "������� �����������: " << c2.area() << "\n";
    std::cout << "�����: " << c2.volume() << "\n";

    Trank_Cone k1(4, 3, 7);              // ����� � ������� � ������ ��������� � �������� 3 � ��c���� 7
    Trank_Cone k2(1, 2, 3, 5, 2, 10);    // ������������ �����

    std::cout << "��������� ����� 1: " << k1;
    std::cout << "������� ����������� : " << k1.area() << "\n";
    std::cout << "�����: " << k1.volume() << "\n";

    std::cout << "��������� ����� 2: " << k2;
    std::cout << "������� �����������: " << k2.area() << "\n";
    std::cout << "�����: " << k2.volume() << "\n";

    return 0;
}