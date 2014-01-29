/* 
 * File:   Vector.h
 * Author: chachalaca
 *
 * Created on 24. duben 2013, 18:22
 */

#ifndef VECTOR_H
#define	VECTOR_H

class Vector {
public:
    Vector();
    Vector(const Vector& orig);
    virtual ~Vector();
    int get(int position);
    Vector* set(int position, int value);
    Vector* insert(int position, int value);
    int getSize();
    void dump();
    
private:
    int size;
    int maxsize;
    int *arr;
    Vector* reallocate(int by);

};

#endif	/* VECTOR_H */

