//--------------------------------------------------------------------------
// 2.7 THE char DATA TYPE

char letter;

// This statement assigns the character 'g'
// to the letter variable.
letter = 'g'; // ***IMPORTANT!!! There is a difference
							// between 'g' and "g". The second one is
							// a string character in C++

letter = "g" // <-- This is going to give me an error
						 // because I am assigning a string to a char.
	// Will appear --> ERROR! Cannot assign a string to a char.


//--------------------------------------------------------------------------
// This program works with characters.
#include <iostream>
using namespace std;

int main()
{
	char letter;
	
	letter = 'A';
	cout << letter << endl;
	letter = 'B';
	cout << letter << endl;
	return 0;
}
//--------------------------------------------------------------------------

// This program demonstrates the close relationship between
// characters and integers.
#include <iostream>
using namespace std;

int main()
{
	char letter;
	
	letter = 65;
	cout << letter << endl;
	letter = 66;
	cout << letter << endl;
	return 0;
}