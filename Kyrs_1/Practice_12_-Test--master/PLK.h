#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "txt.h"
#include "Sensor.h"
#include "Controller.h"
#include "Container.h"

class PLK {
private:
	std::vector <sensor> sens;
	std::vector <controller> controll;

	char revers_signal(char sig) {
		if (sig == '0') return '1';
		else return '0';
	}

	void creat_PLK(int ports) {
		for (int i = 0; i < ports; i++) {
			sensor se;
			controller ct;
			sens.push_back(se);
			controll.push_back(ct);
		}
	}

public:
	PLK() {

	}

	PLK(int ports) {
		creat_PLK(ports);        
	}

	void input_data(std::string data) {
		for (int j = 0; j < data.length(); j++) {
			if (j % 2 == 0) {
				char dt = data[j];
				sens[j].set_signal(dt);
				controll[j].set_order(sens[j].result_signal());
			}
			else {
				char dt = data[j];
				sens[j].set_signal(dt);
				controll[j].set_order(revers_signal(sens[j].result_signal()));
			}
		}
	}
	std::string output_data() {
		std::string data;
		for (int i = 0; i < sens.size(); i++) {
			data += controll[i].resunt_order();
		}
		return data;
	}

	void items() {
		for (int i = 0; i < size(sens); i++)
			std::cout << sens[i].result_signal() << " ";

		std::cout << "\n";

		for (int i = 0; i < size(controll); i++)
			std::cout << controll[i].resunt_order() << " ";

		std::cout << "\n-------\n";
	}
};