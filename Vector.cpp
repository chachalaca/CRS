/* 
 * File:   Vector.cpp
 * Author: chachalaca
 * 
 * Created on 24. duben 2013, 18:22
 */

#include "Vector.h"
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

Vector::Vector() {
    arr = new int[5];
    maxsize = 5;
    size = 0;
}

Vector::Vector(const Vector& orig) {
}

Vector::~Vector() {
}

Vector* Vector::set(int position, int value) {
    if(position >= size) {
        // throw...
    }
    arr[position]=value;
}

int Vector::get(int position) {
    if(position >= size) {
        // throw...
    }
    return arr[position];
}

int Vector::getSize() {
    return this->size;
}

Vector* Vector::reallocate(int by) {
    if(maxsize+by < size) {
        // throw..
    }
    cout << "realloc";
    int *cache = new int[maxsize+by];
    for (int i = 0; i < size; i++) {
        cache[i]=arr[i];
    }
    free(this->arr);
    arr = new int[maxsize+by];
    maxsize = maxsize+by;
    for (int i = 0; i < size; i++) {
        arr[i]=cache[i];
    } 
    free(cache);
    return this;
}

Vector* Vector::insert(int position, int value) {
    if(position >= size) {
        position = size;
    }
    
    if(maxsize-size <= 1) {
        this->reallocate(10);
    }
    
    for (int i = size; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    size++;
    return this;
}

void Vector::dump() {
    for (int i = 0; i < size; i++) {
        cout << "  [" << i << "]:" << arr[i];
    }

}