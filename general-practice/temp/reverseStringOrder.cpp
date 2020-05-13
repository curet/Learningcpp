// reverse de order of a string

#include <iostream>
using namespace std;

int main(){

    string S = "string";
    int left = 0, right = S.length()-1;
    do{
        swap(S[left], S[right]);
        left++; right--;
    }while(left <= right);

    cout << S;

    return 0;
}