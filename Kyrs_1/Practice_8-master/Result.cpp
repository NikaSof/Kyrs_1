#include <iostream>
#include "sensor.h"
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");

	sensor f;
	int g;
	g = rand() % 100;
	f.setvalue(g);

	std::cout << "Вывод ответа: \n";
	std::cout << f.getvalue();
}