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

//--------------------------------------------------------------------------
// 2.8 THE C++ string CLASS

// This program demonstrates the string class.
#include <iostream>
#include <string> // Required for the string class.
using namespace std;

int main()
{
	string movieTitle;

	movieTitle = "Wheels of Fury";
	cout << "My favorite movie is " << movieTitle << endl;
	return 0;
}

//--------------------------------------------------------------------------

// Problem 2.11
    ASCII code for:
    C = 67
    F = 70
    W = 87
    
    // Problem 2.12
    'B' <--- character literal
    "B" <--- string literal
    
    // Problem 2.13
    How many bytes do the following literal use?
    'Q' = 1 byte
    "Q" = 2 bytes
    "Sales" = 6 bytes
    '\n' = 1 byte
    
    // Problem 2.14
    Write a program that has the following variables:
    first, middle, and last. Store your initials in these
    variables and then display them on the screen.
    
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	char first, middle, last;
    
    	first = 'J';
    	middle = 'C';
    	last = 'S';
    	
    	cout << first << '\n';
    	cout << middle << '\n';
    	cout << last << '\n';
    	
    	return 0;
    }
    
    // Problem 2.15
    What is wrong with the following statement?
    
    char letter = "Z"; <-- the problem it's that there is a
    											 string assign to a char literal.
    
    // Problem 2.16
    #include <string> // it is the header file to be included
    									// in order to use string objects.
    
    // Problem 2.17
    #include <iostream>
    #include <string>
    using namespace std;
    
    int main()
    {
    	string myName;
    	string myNumber;
    	string myAddress;
    
    	myName = "What is my Name?";
    	myNumber = "1-801-111-0000";
    	myAddress = "This is my address";
    
    	cout << myName << endl;
    	cout << "My Number is: " << myNumber << endl;
    	cout << myAddress << endl;
    	
    	return 0;
    
    }


//--------------------------------------------------------------------------
2.9 FLOATING-POINT DATA TYPES

// This program uses floating point data types.
#include <iostream>
using namespace std;

int main()
{
	float distance;
	double mass;
	
	distance = 1.495979E11;
	mass = 1.989E30;
	cout << "The Sun is " << distance << " meters away.\n";
	cout << "The Sun\'s mass is " << mass << " kilograms.\n";
	return 0;
}

//--------------------------------------------------------------------------
2.10 THE BOOL DATA TYPE

// This program demonstrates boolean variables.
#include <iostream>
using namespace std;

int main()
{
	bool boolValue;
	
	boolValue = true;
	cout << boolValue << endl;
	boolValue = false;
	cout << boolValue << endl;
	return 0;
}

//--------------------------------------------------------------------------

//Example of assigning Floating-Point Values to Integer Var.

int number;
number = 7.5; // Assigns 7 to number

// Example Assigning a floating-point variable to an integer variable

int i;
float f;
f = 7.5;
i = f; // Assigns 7 to i.

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

//--------------------------------------------------------------------------
2.12 VARIABLE ASSIGNMENTS AND INITIALIZATION
// This program shows variable initialization.
#include <iostream>
using namespace std;
int main()
{
	int month = 2, days = 28;
	
	cout << "Month " << month << " has " << days << " days.\n";
	return 0;
}
