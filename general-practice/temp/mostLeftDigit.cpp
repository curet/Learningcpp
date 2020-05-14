// most left digit [takes "TradE2wln95!" and return 2]

#include <iostream>
using namespace std;

int main(){

    string S = "TradE2wln95!";
    int leftDigit = -1;
    for(int i=0; i<S.length()-1; i++){
        if(isdigit(S[i]) && (leftDigit == -1)){
            leftDigit = S[i];
        }
    }
    cout << leftDigit - '0' <<endl;

    return 0;
}