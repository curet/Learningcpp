// search an element in array using pointers

#include <iostream>
using namespace std;

int main(){

    int A[5] = {1,2,3,4,5};
    int a = 4;
    int *ptrA = A, *location, position;
    
    bool found = false;
    for(int i=0; i<5; i++){
        if(a == *(ptrA + i)){
            found = true;
            position = (i+1);
            location = (ptrA + i);
        }
    }

    if(found){
        cout << "Number was found!" << endl;
        cout << "position: " << position << endl;
        cout << "Address: " << location << endl;
    }else{
        cout << "Number not found!" << endl;
    }

    return 0;
}