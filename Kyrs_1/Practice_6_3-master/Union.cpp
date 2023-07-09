#include <iostream>
#include <string>
#include "Union.h"

Union::Union() {
	name = "*nm*";
	location = "*loc*";
	size = deep = 0;
}

Union::Union(std::string nm, std::string loc) {
	name = nm;
	location = loc;
	size = deep = 0;
}

Union::Union(std::string nm, std::string loc, double sz, double dp) {
	name = nm;
	location = loc;
	size = sz;
	deep = dp;
}

void Union::Print() {
	std::cout << "Название водоёма: " << name << "\n";
	std::cout << "Расположение: " << location << "\n";
	std::cout << "Размер: " << size << "\n";
	std::cout << "Глубина: " << deep << "\n";
}

std::istream& operator>>(std::istream& stream, Union& obj) {
	std::cout << "Введите название водоёма:\n";
	stream >> obj.name;
	std::cout << "Введите расположение:\n";
	stream >> obj.location;
	std::cout << "Введите размер:\n";
	stream >> obj.size;
	std::cout << "Введите глубину:\n";
	stream >> obj.deep;
}

std::string Union::getName() {
	return name;
}
