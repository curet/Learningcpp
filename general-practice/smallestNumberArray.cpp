// this program read an array and output the smallest number from that array

#include <iostream>
using namespace std;

int main(){

    int size=12;
    int arr[12] = {4,5,5,32,7,2,4,7,20,18,11,51};

    int smallestNumber;
    // version 1
    // for(int i=0; i < (size-1); i++){
    //     for(int j=i+1; j<size; j++){
    //         if(smallestNumber>arr[i]){
    //             smallestNumber = arr[i];
    //         }
    //     }
    // }
    
    // version 2
    for(int i=0; i<size; i++){
        if(smallestNumber>arr[i]){
            smallestNumber = arr[i];
        }
    }
    cout << "The smallest number is: " << smallestNumber << endl;
    return 0;
}