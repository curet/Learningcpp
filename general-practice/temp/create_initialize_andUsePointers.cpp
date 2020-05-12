// create, initialize and use pointers

#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int *ptr = &a;
    cout << "Address: " << ptr << endl;
    cout << "number: " << *ptr << endl;


    return 0;
}