// mark the beginning of a comment

#include <iostream> // Because this line starts with a '#' it is called a preprocessor directive.

using namespace std;

int main()
{
	cout << "Programming is great fun!";
return 0;
}

//--------------------------------------------------------------------------
// Different ways to use the stream operator
//Program 2.1
cout << "Programming is great fun!";

//Program 2.2
cout << "Programing is " << "great fun!";

//Program 2.3
cout << "Programming is ";
cout << "great fun!";

//Extra examples:
cout << "Programming is great fun" << endl;
cout << "My pets are" << endl << "dog";
cout << endl << "cat" << endl << "bird" << endl;

//--------------------------------------------------------------------------

// Simple rearange programm correction
#include <iostream>
using namespace std;
int main()
{
	cout << "Success\n";
	cout << "Success Success\n\n";
	cout << "Success";

return 0;
}

//--------------------------------------------------------------------------
// VARIABLES AND LITERALS

// Example
int number

//--------------------------------------------------------------------------

// This program has a variable.
#include <iostream>
using namespace std;

int main()
{
	int number;

	number = 5;
	cout << "The value in number is " << number << endl;
	return 0;
}

//--------------------------------------------------------------------------

number = 5; // This is called an assignment,

// The equal sign is an operator that copies the value
// on it's right (5) into the variable named on its left
// (number). 

// After this line executes, number will be set to 5.

//--------------------------------------------------------------------------
// 2.5 IDENTIFIERS
// Recommended variable declaration style
int itemsOrdered; // Recommended
int x;		  // Instead of this one

//--------------------------------------------------------------------------
// 2.6 INTEGER DATA TYPES
// This program has variables of several
// of the integer types.

#include <iostream>
using namespace std;

int main()
{

	int checking;
	unsigned int miles;
	long days;

	checking = -20;
	miles = 4276;
	days = 189000;

	cout << "We have made a long journey of " << miles;
	cout << " miles.\n";

	cout << "Out checking account balance is " << checking;
	cout << "\nAbout " << days << " days ago Columbus ";
	cout << "stood on this spot.\n";

	return 0;
}

//--------------------------------------------------------------------------
// Ways to define different variables of the same data type

// Way 1
	int length;
	int width;

// Way 2
	int length, width;
//--------------------------------------------------------------------------

// force an integer literal to be stored as a long integer by placing the letter L at the end
long amount;
amount = 32L;

// If I want an integer literal to be treated as
// a long long int, I can append LL at the end of
// the number.

// Example:
long long amount;
amount = 32LL;

//--------------------------------------------------------------------------
// Hexadecimal number F4 expressed in C++
// -->> 0xF4

// Octal must be preceded by a 0.
// Example octal 31 would be:
// -->> 031










