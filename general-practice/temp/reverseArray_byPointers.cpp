// reverse an array using pointers

#include <iostream>
using namespace std;

int main(){

    int A[5] = {1,2,3,4,5};
    int left =0, right = 5-1;
    int *ptrA = A;

    do{
        swap(*(ptrA + left), *(ptrA + right));
                    left++; right--;
    }while(left <= right);

    for(int i=0; i<5; i++){
        cout << *(ptrA + i) << " ";
    }

    return 0;
}