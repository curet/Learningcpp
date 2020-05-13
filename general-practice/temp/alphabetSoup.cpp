// alphabet soup [take a string, reverse it in alphabet order]

#include <iostream>
using namespace std;

int main(){

    string S = "string";
    bool swapped;

    do{
        swapped = false;
        for(int i=0; i<(S.length()-1); i++){
            if(S[i]>S[i+1]){
                swap(S[i], S[i+1]);
                swapped = true;
            }
        }
    }while(swapped);

    cout << S << endl;

    return 0;
}