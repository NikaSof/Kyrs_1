#pragma once
#include <iostream>

class sensor {
private:
	int signal;
public:
	sensor() {
		signal = 0;
	}
	void set_signal(char value) {
		signal = value;
	}
	int get_signal() {
		return signal;
	}
	int result_signal() {
		return signal;
	}
};