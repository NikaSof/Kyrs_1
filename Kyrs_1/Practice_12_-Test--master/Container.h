#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "txt.h"

class container {
private:
	float item;
	int maxItem;
public:
	container() {
		item = 0;
		maxItem = 0;
	}

	container(int max) {
		maxItem = max;
		item = 0;
	}

	bool addItem(float _item) {
		if (item + _item < maxItem)
			item += _item;
		else return false;
	}

	float result_cont() {
		return item;
	}

	void fillcontainer(int koll) {
		std::cout << "Ãðóïïû";
		for (int i = 0; i < koll; i++) {
			float input;
			std::cin >> input;
			if (item + input <= maxItem) item += input;
			else break;
		}
	}

	void show() {
		std::cout << item << "/" << maxItem << "\n";
	}

	void clean() {
		item = 0; 
	}
};