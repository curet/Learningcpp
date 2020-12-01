// this function find the largest number in an array recursively

#include <iostream>

using namespace std;

#define MAX(a, b) ((a) > (b)) ? (a) : (b)

int largestNumberRecursively(int A[], int n){
    if(n == 0) return A[0];
    return MAX(A[n-1], largestNumberRecursively(A, n-1));
}


int main(){

    int A[] = {6,2,3,4,7};
    int size = 5;

    cout << largestNumberRecursively(A, size);

    return 0;
}