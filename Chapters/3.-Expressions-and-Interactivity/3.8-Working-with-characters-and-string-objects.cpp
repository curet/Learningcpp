// 3.8 WORKING WITH CHARACTERS AND STRING OBJECTS

// This program illustrates a problem that can occur if
// cin is used to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Enter the city you live in: ";
	cin >> city;

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}

//--------------------------------------------------------------------------

// This program reads a single character into a char variable.
#include<iostream>
using namespace std;

int main()
{
	char ch;

	cout << "Type a character and press Enter: ";
	cin >> ch;
	cout << "You entered " << ch << endl;
	return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates three ways
// to use cin.get() to pause a program
#include<iostream>
using namespace std;

int main()
{
	char ch;

	cout << "This program has paused. Press Enter to continue.";
	cin.get(ch);
	cout << "It has paused a second time. Please press Enter again.";
	ch = cin.get();
	cout << "It has paused a third time. Please press Enter again.";
	cin.get();
	cout << "Thank you!";
	return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().
#include <iostream>
using namespace std;

int main()
{
   char ch;                        // Define a character variable
   int number;                     // Define an integer variable

   cout << "Enter a number: ";
   cin >> number;                  // Read an integer
   cout << "Enter a character: ";
   ch = cin.get();                 // Read a character
   cout << "Thank You!\n";
   return 0;
}

//--------------------------------------------------------------------------

// This program successfully uses both
// cin >> and cin.get() for keyboard input.
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();					// Skip the newline character
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";
	return 0;
}


