// swap two numbers using pointers

#include <iostream>
using namespace std;

int main(){

    int a=5;
    int b=4;
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrSwap = ptrA;
    ptrA = ptrB;
    ptrB = ptrSwap;

    cout << *ptrA << endl;
    cout << *ptrB << endl;
    return 0;
}