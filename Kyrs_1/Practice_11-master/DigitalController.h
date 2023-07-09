#pragma once

class Dsensor {
private:
	int signal;
public:
	Dsensor();
	void set_signal(int value);
	int get_value();
	int result_signal();
};

class Dcontroller {
private:
	int order;
public:
	Dcontroller();
	void set_order(int value);
	int uwu_order();
};