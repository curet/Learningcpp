// Lexicographically First and Last

#include <iostream>
using namespace std;

int main(){

    string S = "marmite";
    string first;
    string last;
    bool swapped;

    do{
        swapped = false;
        for(int i=0; i<S.length()-1; i++){
            if(S[i] > S[i+1]){
                swap(S[i], S[i+1]);
                swapped = true;
            }
        }

    }while(swapped);

    first = S;

    do{
        swapped = false;
        for(int i=0; i<S.length()-1; i++){
            if(S[i] < S[i+1]){
                swap(S[i], S[i+1]);
                swapped = true;
            }
        }

    }while(swapped);

    last = S;

    cout << first << endl;
    cout << last << endl;

    return 0;
}