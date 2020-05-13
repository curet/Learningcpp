// sort array using pointers

#include <iostream>
using namespace std;

int main(){

    int A[] = {5,2,1,4,3};
    int N=4;
    bool swapped;

    do{

            swapped = false;
        for(int index=0; index<=N; index++){
            if(*(A + index) > *(A + (index + 1))){
            swap(*(A + index), *(A + (index + 1)));
                swapped = true;
            }
        }  
    }while(swapped);

    for(int i=0; i<5; i++){
        cout << A[i] << " ";
    }

    return 0;
}