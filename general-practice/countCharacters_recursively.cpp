// count the characters of a string recursively
// this exercise will count the amount of time "A" appears in the string

#include <iostream>

using namespace std;

int countCharacters_recursively(string st){

    if (st.length() == 0) return 0;

    int count = 0;
    if (st.substr(0, 1) == "A") count = 1;
    return count + countCharacters_recursively(st.erase(0, 1));
}

int main(){

    cout << countCharacters_recursively("ctcowcAt") << endl;

    return 0;
}