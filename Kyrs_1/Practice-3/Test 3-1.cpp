#include <iostream>
#include <locale>
#include "Header 3-1.h"

int main(){
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC, "en_EN.utf8");

    double a, b, c;
    std::cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    std::cout << exmpl.find_Y(6);
    return 0;
}