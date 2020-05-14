// Nth Element [takes {1,3,5,7}, 3] returns 5 (the 3rd element)

#include <iostream>
using namespace std;

int main(){

    int A[] = {1,3,5,7};
    int Asize = 4;
    int nthElement = 3;
    bool swapped;

    do{
        swapped = false;
        for(int i=0; i<Asize-1; i++){
            if(A[i] > A[i+1]){
                swap(A[i] , A[i+1]);
                swapped = true;
            }
        }
    }while(swapped);

    if(nthElement > Asize) cout << "The Array isn't that big, submit a smallest nth element" << endl;
    else cout << A[nthElement-1] << endl;

    return 0;
}