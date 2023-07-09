#include "Sensor.h"
#include <iostream>

sensor::sensor() {
	signal = 0;
}

void sensor::set_signal(int value) {
	signal = value;
}

int sensor::result_signal() {
	return signal;
}

controller::controller() {
	order = 0;
}

void controller::set_order(int value) {
	if (value == 0) {
		order = 1;
	}
	else {
		order = 0;
	}
}