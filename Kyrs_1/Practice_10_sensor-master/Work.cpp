#include "Sensor.h"
#include <iostream>
#include <string>
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");

	sensor sens;
	controller controll;
	
	while (sens.result_signal() == 0) {
		std::cout << "������ �� �������� �����! \n";
		int n;
		n = rand() % 2;
		sens.set_signal(n);
		controll.set_order(sens.result_signal());
	}
	std::cout << "������ ������� � ���������� �����.";
}