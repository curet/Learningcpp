// write a function which will take pointer and display the number on screen
// take number from user and print it on screen using that function

#include <iostream>
using namespace std;

void fun(int *a){

    cout << "Here is your number, straigh out of a function: " << *a << endl;
}

int main(){

    int *ptr;

    cout << "Enter a number: ";
    cin >> *ptr;

    fun(ptr);

    return 0;
}