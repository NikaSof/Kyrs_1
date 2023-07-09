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
	std::cout << "�������� ������: " << name << "\n";
	std::cout << "������������: " << location << "\n";
	std::cout << "������: " << size << "\n";
	std::cout << "�������: " << deep << "\n";
}

std::istream& operator>>(std::istream& stream, Union& obj) {
	std::cout << "������� �������� ������:\n";
	stream >> obj.name;
	std::cout << "������� ������������:\n";
	stream >> obj.location;
	std::cout << "������� ������:\n";
	stream >> obj.size;
	std::cout << "������� �������:\n";
	stream >> obj.deep;
}

std::string Union::getName() {
	return name;
}
