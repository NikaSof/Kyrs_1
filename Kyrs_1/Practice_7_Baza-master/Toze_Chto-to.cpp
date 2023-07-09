#include <iostream>
#include <cmath>
#include "Chto-to.h"


eq2::eq2() {
    a = 0; b = 0; c = 0; D = 0;
}

eq2::eq2(double a1, double b1) {
    a = a1; b = b1; c = 0;
    D = b * b - 4 * a * c;
}

eq2::eq2(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}

void eq2::set(double a1, double b1, double c1) {
    a = a1; b = b1; c = c1;
    D = b * b - 4 * a * c;
}

void eq2::set_c(double c1) {
    c = c1;
    D = b * b - 4 * a * c;
}

double eq2::get_c() {
    std::cout << c << std::endl;
    return 0;
}

double eq2::find_X() {
    if (D < 0) {
        std::cout << "Корней нет" << "\n";
        return 0;
    }
    else {
        if (D == 0) {
            std::cout << "Корень один: " << "\n";
            double x = (-b - sqrt(D)) / (2 * a);
            std::cout << "X = " << x << "\n";
            return x;
        }
        else if (D < 0) {
            std::cout << "Ïàðàáîëà íå ïåðåñåêàåò îñü oX, Èìåþòñÿ òîëüêî êîìïëåêñíûå êîðíè: ";
            std::cout << a / 2 << " +/- " << sqrt(abs(D)) << "i" << std::endl;
            return 0;
        }
        else {
            std::cout << "Корней 2: " << "\n";
            double x1 = (-b - sqrt(D)) / (2 * a);
            double x2 = (-b + sqrt(D)) / (2 * a);
            std::cout << "x1 = " << x1;
            std::cout << " x2 = " << x2;
        }
    }
}
double eq2::find_Y(double x1) {
    std::cout << "y = ";
    return a * x1 * x1 + b * x1 + c;
    return 0;

}

double eq2::find_YS(double i, double j) {
   if (i == j) {
        std::cout << a * i * i + b * i + c << " \n";
    }
    else {
        std::cout << a * i * i + b * i + c << " \n";
        return 0 + find_YS(i + 1, j);
    }
}

void eq2::rand_abc(int i, int j) {
    a = rand() % j + i;
    b = rand() % j + i;
    c = rand() % j + i;
    D = b * b - 4 * a * c;
}