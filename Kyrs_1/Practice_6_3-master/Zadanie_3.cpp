#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"
#include <iostream>
#include <string>


int main()
{
    Ocean ocean1("���-�� ��������","���-��", 11022, 165200000);
    std::cout << ocean1 << '\n';

    Sea sea1("���-�� ��������","�������� ��� ��", 3372, 1583000, &ocean1);
    std::cout << sea1 << '\n';

    Bay bay1("����", "� ����", 350, 130000, &sea1);
    std::cout << bay1 << '\n';

    Sea sea2("������ ����-��", "������", 1025, 371000);
    std::cout << sea2 << '\n';
}