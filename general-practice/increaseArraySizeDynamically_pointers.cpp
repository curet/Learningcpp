// This is to review pointers
#include <iostream>

using namespace std;

int main(){

    //int array[] = {};

    double * array = nullptr;
    array = new double[1];


    cout << "Enter first values: ";

        int i=0;

    while(array[i-1] != -1){

        cin >> array[i];
        cout << "Enter next: ";

        i++;
    }

    int sizeOfArray = i-1;
    for(int j=0; j<sizeOfArray; j++){
        cout << array[j] << " ";
    }

        double maximum;
    for(int m=0; m<sizeOfArray; m++){

        // find maximum value
        if(array[m] < array[m+1]){
            maximum = array[m+1];
        }
    }

    cout << "\nThe maximum value is: " << maximum;

        double * normalized = nullptr;
        normalized = new double[1];

    for(int k=0; k<sizeOfArray; k++){
        normalized[k] = array[k] / maximum;
    }

        cout << endl;
    for(int k=0; k<sizeOfArray; k++){

        cout << normalized[k] << " ";
    }

    delete [] array;
    delete [] normalized;

    return 0;
    
}
