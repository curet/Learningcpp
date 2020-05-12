// add two numbers using pointers

#include <iostream>
using namespace std;

int main(){

    int a=5;
    int b=4;
    int *ptrA = &a;
    int *ptrB = &b;

    (*ptrA) += (*ptrB);
    cout << *ptrA << endl;

    return 0;
}