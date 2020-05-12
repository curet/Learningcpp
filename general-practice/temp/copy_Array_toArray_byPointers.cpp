// copy one array to another using pointers

#include <iostream>
using namespace std;

int main(){

    int A[5] = {1,2,3,4,5};
    int B[5];
    int *ptrA = A, *ptrB = B;
    for(int i=0; i<5; i++){
        *(ptrB + i) = *(ptrA + i);  
    }
    for(int i=0; i<5; i++){
        cout << *(ptrB + i) << " ";
    }
    
    return 0;
}