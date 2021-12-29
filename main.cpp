#include <iostream>
#include "Vector.h"
using namespace std;

int main() {

    Vector *vectorA = new Vector(10);
    Vector *vectorB = new Vector(10);
    Vector *vectorC = new Vector(10);

    for(int i=0;i<10;i++){
        vectorA->elements[i]=i+1;
        vectorB->elements[i]=i;
    }
    vectorA->operator*(5);
    for(int i=0;i<10;i++)
        cout << vectorA->elements[i]<<endl;

    return 0;
}
