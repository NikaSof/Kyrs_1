#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>

std::vector <int> read_mass(int n) {
	std::vector <int> line;
	std::ifstream in("Input_mass.txt");
	int flag = 0;
	for (int ch; in >> ch; ) {
		flag++;
		if (flag == n) { 
			line.push_back(ch);
			in.close();
			return line; }
	}
}

std::string read(int n) {
	std::vector <std::string> out;
	std::string line;
	std::ifstream in("Input.txt");
	int flag = 1;
	if (in.is_open()) {
		while (std::getline(in, line)) {
			flag++;
			if (flag == n) { in.close(); return line; }
		}
	}
}

void write(std::vector <std::string> put) {
	std::ofstream out;
	out.open("Output.txt");
	if (out.is_open()) {
		for (int i = 0; i < put.size(); i++) {
			out << put[i] << "\n";
		}
	}
	out.close();
}

void delacc()
{
	std::ofstream rewrite("Output.txt");
	rewrite.write("", 0);
	rewrite.close();
}
