// swap two arrays using pointers

#include <iostream>
using namespace std;

int main(){

    int A[5] = {1,2,3,4,5};
    int B[5] = {6,7,8,9,10};
    int *ptrA = A, *ptrB = B, *ptrSwap;

    ptrSwap = ptrA;
    ptrA = ptrB;
    ptrB = ptrSwap;

    for(int i=0; i<5; i++){
        cout << *(ptrA + i) << " ";
    }cout << endl;

    for(int i=0; i<5; i++){
        cout << *(ptrB + i) << " ";
    }cout << endl;

    return 0;
}