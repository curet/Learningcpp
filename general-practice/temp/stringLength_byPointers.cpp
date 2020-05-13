// find length of string using pointers

#include <iostream>
#include <string>
using namespace std;

int main(){

    char ch[] = "string";
    char *ptrCH = ch;

    int count =0;
    while(isalpha(*ptrCH)){
        count++;
        (ptrCH)++;
    }

    cout << count;

    return 0;
}