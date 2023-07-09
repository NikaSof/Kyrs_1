#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

std::vector <std::string> read() {

	std::vector <std::string> out;
	std::string line;

	std::ifstream in("input.txt");
	if (in.is_open()) {
		while (getline(in, line)) {
			out.push_back(line);
		}
	}
	in.close();
	return out;
}

void write(std::vector <std::string> put) {
	std::ofstream out;
	out.open("output.txt");
	if (out.is_open()) {
		for (int i = 0; i < put.size(); i++) {
			out << put[i] << "\n";
		}
	}
	out.close();
}