//
// Created by EgorRychkov on 20.03.2024.
//

#include "IntArray.h"
#include "algorithm"
IntArray::IntArray(int sz) {
    Init(nullptr, sz);
}

IntArray::IntArray(int *array, int sz) {
    Init(array, sz);
}

IntArray::IntArray(IntArray &array) {
    Init(array.a, array._size);
}

int IntArray::size() {
    return _size;
}

int &IntArray::operator[](int index) {
    return a[index];
}

void IntArray::Init(int *array, int sz) {
    _size = sz;
    a = new int[_size];
    if (array == nullptr) {
        for (int i = 0; i < _size; i++) {
            a[i] = 0;
        }
    } else {
        for (int i = 0; i < _size; i++) {
            a[i] = array[i];
        }
    }
}

void IntArray::operator=(IntArray &array) {
    _size = array._size;
    delete a;
    a = new int[_size];
    for (int i = 0; i < _size; i++) {
        a[i] = array.a[i];
    }
}

bool IntArray::operator==(IntArray &array) {
    if (_size != array._size) {
        return false;
    }
    int cnt = 0;
    for (int i = 0; i < _size; i++) {
        if (a[i] == array.a[i]) {
            cnt++;
        }
    }
    if (cnt == _size) {
        return true;
    } else {
        return false;
    }
}

bool IntArray::operator!=(IntArray &array) {
    return !(*this == array);
}

int IntArray::max() {
    int mx = a[0];
    for (int i = 0; i < _size; i++) {
        mx = std::max(mx, a[i]);
    }
    return mx;
}

int IntArray::min() {
    int mn = a[0];
    for (int i = 0; i < _size; i++) {
        mn = std::min(mn, a[i]);
    }
    return mn;
}

void IntArray::sort() {
    std::sort(a, a + _size);
}

int IntArray::find(int value) {
    for (int i = 0; i < _size; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return _size;
}