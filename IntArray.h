//
// Created by EgorRychkov on 20.03.2024.
//
#include <iostream>

#ifndef UNTITLED3_INTARRAY_H
#define UNTITLED3_INTARRAY_H

class IntArray {
public:
    IntArray(int sz = DEFAULT_SIZE_ARRAY);

    IntArray(int *array, int sz);

    IntArray(IntArray &array);

    int size();

    int &operator[](int index);

    void operator=(IntArray &array);

    bool operator==(IntArray &array);

    bool operator!=(IntArray &array);

    int max();

    int min();

    void sort();

    int find(int value);

private:
    int *a;
    int _size;
    static const int DEFAULT_SIZE_ARRAY = 100;

    void Init(int *array, int sz);
};


#endif //UNTITLED3_INTARRAY_H
