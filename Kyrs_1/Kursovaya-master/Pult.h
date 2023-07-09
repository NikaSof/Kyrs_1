#pragma once
#include "AnalogSensor.h"
#include "DidgSensor.h"
#include "Controller.h"
#include "Conteiner.h"
#include "PLK.h"
#include "txt.h"
#include <iostream>
#include <vector>

class pult {
private:
	int ports = 4;
	int maxItem = 70;
	int maxMass = 1000;
	std::string comand;
	std::vector <std::string> out;
	int n = 1;
	int nomb_comand = 0;
public:

	pult() {}

	void count() {
		n++;
	}

	void start_prog() {
		container cont(maxItem, maxMass);
		PLK plk(ports);
		std::cout <<  "Введите команду menu для ознакомления с работой конвейера: ";
		while (true) {
			std::cin >> comand;
			if (comand == "start") {
				nomb_comand += 1;
				std::cout << "Конвейер был запущен... \n";
			}

			if (comand == "menu") { // 7 пробелов
				std::cout << "       start - запуск конвейера \n       cont - погрузка деталей на конвейер \n       clear - очистка контейнеров и начало программы заново \n       end - завершение работы конвейера \n";
			}

			if (comand == "cont" && nomb_comand > 0) {
				std::string in = read(n);
				plk.input_didg(in);
				cont.filling();
				out.push_back(plk.output());
				count();
				write(out);
			}

			if (comand == "cont" && nomb_comand < 1) {
				std::cout << "Error comand...\n";
			}

			if (comand == "clear") {
				delacc();
				n = 1;
				out.clear();
				cont.clear();
			}

			if (comand != "start" && comand != "cont" && comand != "clear" && comand != "end") {
				std::cout << "Error comand...\n";
			}

			if (comand == "end") {
				cont.show_cont();
				std::cout << "Работа конвейера завершена.\n";
				break;
			}
		}
	}
};
