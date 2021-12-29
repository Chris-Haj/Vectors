//
// Created by chris on 12/29/2021.
//

#ifndef EX5_VECTOR_H
#define EX5_VECTOR_H


class Vector {

public:
    Vector(int n);
    Vector(double a[],int n);
    Vector& operator*(double d);
    Vector& operator*(const Vector &v);
    Vector& dot(const Vector& v);
    friend Vector& operator*(double d,const Vector &v);

public:
    double *elements;
    int size;

};

#endif //EX5_VECTOR_H
