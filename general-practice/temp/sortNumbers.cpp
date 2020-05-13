// sort numbers in ascending order

#include <iostream>
using namespace std;

int main(){

    int A[] = {5,3,2,4,1};
    int size = 5;
    bool swapped;

    do{
        swapped = false;
        for(int i=0; i<size; i++){

            if(A[i]>A[i+1]){
                swap(A[i], A[i+1]);
                swapped = true;
            }
            
        }
    }while(swapped);

    for(int i=0; i<size; i++){
        cout << A[i] << " ";
    }cout << endl;

    return 0;
}