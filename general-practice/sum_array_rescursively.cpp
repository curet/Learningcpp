// sum the values of an array recursively

#include <iostream>

using namespace std;

int sum_array_recursively(int A[], int size){
    if(size == 0) return 0;
    return A[size - 1] +  sum_array_recursively(A, size - 1);
}

int main(){


    int A[] = {1,2,3,4,5};
    int size = 5;

    cout << sum_array_recursively(A, size) << endl;

    return 0;
}