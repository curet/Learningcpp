// reverse digits of a number using pointers
#include <iostream>
using namespace std;

int main(){

    int N = 6;
    int A[6] = {1,2,3,4,5,6};
    int *ptrA = A;
    int left = 0;
    int right = N-1;

    do{

        swap(*(ptrA + left), *(ptrA + right));
                  left++; right--;

    }while(left <= right);

    for(int i=0; i<N; i++){
        cout <<A[i];
    }
    
    return 0;
}