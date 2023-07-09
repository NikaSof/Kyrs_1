#include "PLK.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
	setlocale(LC_ALL, "rus");

	std::vector <std::string> in = read();
	std::vector <std::string> out;
	 
	std::cout << "Введите кол-во контейнеров и деталей: ";
	int size, koll, ports = 4;
	std::cin >> size >> koll;

	container cont(size);
	PLK plk(ports);

	std::cout << "Ёмкость контейнера (в начале): ";
	cont.show();

	//cont.fillcontainer(koll);
	std::cout << "Наполненность контейнера: ";
	cont.show();

	for (int i = 0; i < in.size(); i++) {
		plk.input_data(in[i]);
		out.push_back(plk.output_data());
		plk.items();
	}

	write(out);

	std::cout << "Конец программы.";
}