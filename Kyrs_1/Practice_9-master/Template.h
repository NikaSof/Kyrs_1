#pragma once
#include <iostream>

template <class T> void swap(T& x, T& y) {
	T z = x;
	x = y;
	y = z;
}
template <class T> void outXY(T& x, T& y) {
	std::cout << x << " " << y << "\n";
}

class My_class {
private:
	int a;
	float b;
public:
	My_class(int a, float b);
	void Out();
	My_class operator = (My_class& T);
};
