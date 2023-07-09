#pragma once

class sensor {
private:
	int signal;
public:
	sensor();
	void set_signal(int value);
	int result_signal();
};

class controller {
private:
	int order;
public:
	controller();
	void set_order(int value);
};