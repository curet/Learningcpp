#include <iostream>
using namespace std;

int main()
{
for(int i=1, j=10; i<=10; i++ , j--)
{
    cout << string(i, '+') << setw(15-i) << string(j, '+') << endl;
}

return 0;
}
