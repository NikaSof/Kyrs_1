#pragma once
#include "AnalogSensor.h"
#include "txt.h"
#include <iostream>
#include <string>
#include <vector>

class container {
private:
	analog_sensor sens;
	int item;
	int mass;
	int maxItem;
	int maxMass;
	int conteiners = 0;
	int n = 1;
public:
	
	container() {
		item = maxItem = mass = maxMass = 0;
	}
	container(int max, int ms) { // установка максимальной ёмкости контейнера
		maxItem = max;
		maxMass = ms;
		mass = 0;
		item = 0;
	}

	int filling() { // Заполнение контейнера
		std::vector <int> massa = read_mass(n);
		for (int i = 0; i < massa.size(); i++) {
			if (item <= maxItem && item + 10 <= maxItem && mass < maxMass && mass + massa[i] <= maxMass) {
				mass += massa[i];
				n++;
				item += 10;
				std::cout << "Деталей в контейнере: " << item << "/" << maxItem << "\n";
				std::cout << "Масса деталей в контейнере: " << mass << "/" << maxMass << "\n";
			}
			else {
				std::cout << "Требуется новый котейнер\n";
				conteiners++;
				item = 0;
				mass = 0;
				std::cout << "Контейнеров заполненно :" << conteiners << "\n";
				std::cout << "Новый контейнер : ";
				show();
			}
		}
		return item;
	}

	void clear() {
		item = 0;
		mass = 0;
		conteiners = 0;
		n = 1;
	}

	void show() { 
		std::cout << item << "/" << maxItem << "\n";
	}

	void show_cont() {
		std::cout << "Контейнеров заполненно: " << conteiners << "\n";
	}

};
