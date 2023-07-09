#include "DigitalController.h"
#include <iostream>
#include <random>

int main() {
	setlocale(LC_ALL, "Russian");

	Dsensor sens;
	Dcontroller controll;

	for (int i = 0; i < 3; i++) {
		int mass = rand() % 101;
		sens.set_signal(mass);
		controll.set_order(sens.get_value());
		std::cout << "Деталь была подброшена с силой: " << controll.uwu_order() << "\n";
	}
	std::cout << "Все детали прибыли в назначеное место.";
}