//
// Created by Jose C.S. Curet on 3/4/20.
//

// This program display pattern.

#include <iostream>
#include <string>
using namespace std;

int main()
{
        for(int i=1, j=5; i<=7; i+=2, j--)
        {
            cout << string(j, ' ') << string(i, '*') << endl;
        }

    return 0;
}
