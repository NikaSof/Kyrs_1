#pragma once
#include <iostream>

template <class T> void swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}

template <class T> void sort(T* arr , int length) {
    int x, y;
    for (int step = length / 2; step > 0; step /= 2)
    {
        for (int i = step; i < length; i += 1)
        {
            int j = i;
            while (j >= step && arr[j - step] > arr[i])
            {
                x = arr[j];
                y = arr[j - step];
                swap(x, y);
                j -= step;
                std::cout << "\n";
            }
        }
    }
}