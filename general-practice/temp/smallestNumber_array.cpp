// find the smallest number in an array

#include <iostream>
using namespace std;

int main(){

    int A[] = {1,2,3,4,5};
    int size = 5;
    int smallest = A[0];
    for(int i=0; i<size; i++){
        if(smallest > A[i]){
            smallest = A[i];
        }
    }
    cout << smallest << endl;

    return 0;
}