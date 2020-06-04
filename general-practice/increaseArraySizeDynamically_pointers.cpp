// This is to review pointers
#include <iostream>

using namespace std;

int main(){

    //int array[] = {};

    int * array = nullptr;
    array = new int[1];


    cout << "Enter first values: ";

        int i=0;

    while(array[i-1] != -1){

        cin >> array[i];
        cout << "Enter next: ";

        i++;
    }

    for(int j=0; j<(i-1); j++){
        cout << array[j] << " ";
    }
    
    return 0;
}