// Write a C++ program to find the max of an integral data set. The program will ask the user to
// input the number of data values in the set and each value. The program prints on screen a
// pointer that points to the max value.

#include <iostream>
using namespace std;

int main(){

    int size = 1;
    int A[size];
    int *ptrA;
    int max = 0;
    
    cout << "Enter the amount of values: ";
    cin >> size;

    for(int i=0; i<size; i++){
        cout << "Enter the values: ";
        cin >> A[i];
    }

    for(int i=0; i<size; i++){
        if(max<A[i]){
            max = A[i];
        }
    }
    ptrA = &max;

    cout << "Max value is " << *ptrA << " in the address " << ptrA;
    
    return 0;
}