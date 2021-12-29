//
// Created by chris on 12/29/2021.
//

#include "Vector.h"


Vector::Vector(double *a, int n) {
    this->size=n;
    this->elements=new double[n];
    for(int i=0;i<n;i++)
        elements[i]=a[i];
}

Vector::Vector(int n) {
    this->size=n;
    this->elements =  new double[n];
    for(int i=0;i<n;i++)
        elements[i]=0;
}

Vector& Vector::operator*(double d) {
    for(int i=0;i<size;i++)
        elements[i]*=d;
    return *this;
}

Vector& Vector::operator*(const Vector &v) {
    for(int i=0;i<size;i++){
        elements[i]*=v.elements[i];
    }
    return *this;
}

Vector& Vector::dot(const Vector &v) {

}
