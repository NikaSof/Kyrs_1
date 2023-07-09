#pragma once
#include <iostream>

class analog_sensor {
private:
	int mass;
public:
	analog_sensor() {
		mass = 0;
	}
	void set_mass(int _mass) {
		mass = _mass;
	}
	int get_mass() {
		return mass;
	}
};