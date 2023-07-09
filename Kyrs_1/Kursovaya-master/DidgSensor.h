#pragma once
#include <iostream>

class sensor {
private:
	char signal;
public:
	sensor() {
		signal = '0';
	}
	void set_signal(char sig) {
		signal = sig;
	}
	int get_signal() {
		return signal;
	}
};