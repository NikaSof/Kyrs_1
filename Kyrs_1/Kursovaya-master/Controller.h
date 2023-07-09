#pragma once
#include "DidgSensor.h"
#include <iostream>

class controller {
private:
	char order;
public:
	controller() {
		order = '0';
	}
	void set_order (char ord) {
		order = ord;
	}
	int get_order() {
		return order;
	}
};