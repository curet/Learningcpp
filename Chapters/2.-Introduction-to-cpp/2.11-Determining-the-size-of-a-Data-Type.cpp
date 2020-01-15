//--------------------------------------------------------------------------
2.11 DETERMINING THE SIZE OF A DATA TYPE
// This program determine the size of integers, long,
// integers, and long doubles.
#include <iostream>
using namespace std;

int main()
{
	long double apple;
	
	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "An apple can be eaten in " << sizeof(apple);
	cout << " bytes!\n";
	return 0;

}

