// input and print array elements using pointer

#include <iostream>
using namespace std;

int main(){

    int A[5];
    int *ptrA = A;

    for(int i=0; i<5; i++){
        cout << "Enter number: ";
        cin >> *(ptrA + i);
    }
    for(int i=0; i<5; i++){
        cout << *(ptrA +i) << " ";
    }

    return 0;
}