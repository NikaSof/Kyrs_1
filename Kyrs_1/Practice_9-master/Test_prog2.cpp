#include "Sort_arr.h"
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	
	const int size = 3;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
	sort(arr, size);
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}