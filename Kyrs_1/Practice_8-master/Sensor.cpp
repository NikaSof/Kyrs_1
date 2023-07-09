#include "sensor.h"

sensor::sensor() {
	value = 0;
}

void sensor::setvalue(int va) {
	value = va;
}

int sensor::getvalue() {
	return value;
}
