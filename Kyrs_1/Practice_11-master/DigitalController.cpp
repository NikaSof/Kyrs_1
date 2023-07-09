#include "DigitalController.h"
#include <iostream>

Dsensor::Dsensor() {
	signal = 0;
}

void Dsensor::set_signal(int value) {
	signal = value;
}

int Dsensor::get_value() {
	return signal;
}

int Dsensor::result_signal() {
	return signal;
}

Dcontroller::Dcontroller() {
	order = 0;
}

void Dcontroller::set_order(int value) {
	double g = 9.8;
	int h = 2;
	order = ceil(order * g * h);
}

int Dcontroller::uwu_order() {
	return order;
}