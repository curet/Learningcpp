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