// This program it is just to practice and have a better understand working with Arrays

#include <iostream>
using namespace std;

int main(){

    int number = 10;
    int count[number];

    cout << "Enter a series of 10 numbers" << endl;
    for(int i=0; i< number; i++){
        cin >> count[i];
    }

    for(int i=0, j=1; i<number; i++, j++){
        cout << "Number " << j << " : ";
        cout << count[i] << endl;
        count[i];
    }
    return 0;
}