#pragma once
#include "AnalogSensor.h"
#include "DidgSensor.h"
#include "Controller.h"
#include "Conteiner.h"
#include "txt.h"
#include <iostream>
#include <vector>

class PLK {
private:

	std::vector <sensor> sens;
	std::vector <controller> control;
	//std::vector <analog_sensor> al_sens;

public:

	PLK() {

	}

	PLK(int ports) { // создание PLK
		creat_PLK(ports);
	}

	char revers_sig(char sig) {
		if (sig == '0') return '1';
		else return '0'; 
	}

	void creat_PLK(int ports) {
		for (int i = 0; i < ports; i++) {
			sensor se;
			controller cl;
			analog_sensor als;
			sens.push_back(se);
			control.push_back(cl);
		}
	}

	/*void input_analog(std::string mass) { // изменение передаваемого датчиком на контроллер сигнала
		for (int j = 0; j < mass.length(); j++) {
			int ms = mass[j];
			al_sens[j].set_mass(ms);
			al_sens[j].get_mass();
		}
	}*/

	void input_didg(std::string data) { // изменение передаваемого датчиком на контроллер сигнала
		for (int j = 0; j < data.length(); j++) {
			if (j % 2 == 0) {
				char dt = data[j];
				sens[j].set_signal(dt);
				control[j].set_order(sens[j].get_signal());
			}
			else {
				char dt = data[j];
				sens[j].set_signal(dt);
				control[j].set_order(revers_sig(sens[j].get_signal()));
			}
		}
	}

	std::string output() { // вывод сигнала в txt файл
		std::string data;
		int i = 0;
		for (int i = 0; i < sens.size(); i++) {
			data += control[i].get_order();
		}
		return data;
	}
};