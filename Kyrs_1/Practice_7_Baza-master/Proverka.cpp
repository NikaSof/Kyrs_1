#include <iostream>
#include <locale>
#include "Chto-to.h"

int main() {
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "en_EN.utf8");

    double a, b, c;
    eq2 exmpl;
    eq2 exmpl1(3, 4);
    eq2 exmpl2(1, 2, 3);

    int i, j;

    std::cin >> i >> j;

    exmpl.rand_abc(i, j);

    std::cout << exmpl << "\n";
    std::cout << exmpl1 << "\n";
    std::cout << exmpl2 << "\n";

    std::cin >> c;
    exmpl1.set_c(c);

    std::cout << exmpl1 << "\n";
    exmpl.find_X(); exmpl1.find_X(); exmpl2.find_X();

    double n, m;
    std::cin >> n >> m;
    exmpl.find_YS(n, m); exmpl1.find_YS(n, m); exmpl2.find_YS(n, m);

    std::cout << "Конец программы";
    return 0;
}