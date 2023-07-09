#include "Template.h"
#include <iostream>

My_class::My_class(int a, float b) {
	this->a = a;
	this->b = b;
}

void My_class::Out() {
	std::cout << a << " " << b << "\n";
}

My_class My_class::operator=(My_class& T)
{
	a = T.a;
	b = T.b;
	return *this;
}