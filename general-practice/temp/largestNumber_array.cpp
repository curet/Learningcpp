// find the largest number in an array

#include <iostream>
using namespace std;

int main(){

    int A[] = {1,2,5,4,3};
    int size = 5;
    int largest =0;
    for(int i=0; i<size; i++){
        if(largest < A[i]){
            largest = A[i];
        }
    }
    cout << largest << endl;

    return 0;
}