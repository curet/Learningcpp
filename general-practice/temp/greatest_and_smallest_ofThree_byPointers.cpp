// this program find out the greatest and smallest among three numbers using pointers;
#include <iostream>
using namespace std;

int main(){

    const int N = 3;
    int A[N];
    int *ptrA = A;
    int smallest;
    int largest;

    for(int i=0; i<N; i++){
        cout << "Enter a number: ";
        cin >> A[i];
    }

    smallest = *ptrA; //pointing to the first element of the array entered by the user
    largest = *ptrA;

    for(int i=0; i<N; i++){

        if(smallest > *(ptrA + i)){
            smallest = *(ptrA + i);
        }

        if(largest < *(ptrA + i)){
            largest = *(ptrA +i);
        }
    }
    
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;

    return 0;
}
