// this program will create two triangle, instead of using N as limit, I will use the SUM of the elements 1-n as limit
// meaning (n * (n + 1) ) / 2

#include <iostream>
using namespace std;

/*
 *  getTriangle takes an integer and display 2 triangles (each oposite to the other)
 */

void getTriangle(int n){

    int left = 1,
        right = n,
        temp,
        accumulator = 0;
    
    const int SUM = (n*(n+1))/2;

    do{

        // display first number to n
        temp = left;
        while(left){cout << "*" << " "; --left;}
        left = temp;
        left++;

        // display from n to first
        temp = right;
        while(right){cout << "?" << " "; --right;}
        right = temp;
        right--;

        cout << "\n";

        accumulator += left;

    }while(accumulator <= SUM);

}


int main(){
    
    int size;

    cout << "Enter the size of the triangle: ";
    cin >> size;
    getTriangle(size);

    return 0;
}