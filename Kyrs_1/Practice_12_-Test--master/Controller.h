#pragma once
#include <iostream>

class controller {
private:
	int order;
public:
	controller() {
		order = 0;
	}
	void set_order(char val) {
		order = val;
	}
	int resunt_order() {
		return order;
	}

};
