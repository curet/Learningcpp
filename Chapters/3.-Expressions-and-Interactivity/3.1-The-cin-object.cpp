// This program asks the user to enter the length and width of
// a rectangle. It calculates the rectangle's area and displays
// the value on the screen.
#include <iostream>
using namespace std;

int main()
{
	int length, width, area;
	
	cout << "This program calculates the area of a ";
	cout << "rectangle.\n";
	cout << "What is the lenght of the rectangle? ";
	cin >> length;
	cout << "What os the width of the rectangle? ";
	cin >> width;
	area = length * width;
	cout << "The area of the rectangle is " << area << ".\n";
	return 0;
}

//--------------------------------------------------------------------------

// This program asks the user to enter the length and width of
// a rectangle. It calculates the rectangle's area and displays
// the value on the screen.
#include <iostream>
using namespace std;

int main()
{
   int length, width, area;

   cout << "This program calculates the area of a ";
   cout << "rectangle.\n";
   cout << "Enter the length and width of the rectangle ";
   cout << "separated by a space.\n";
   cin >> length >> width;
   area = length * width;
   cout << "The area of the rectangle is " << area << endl;
   return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates how cin can read multiple values
// of different data types.
#include <iostream>
using namespace std;

int main()
{
   int whole;
   double fractional;
   char letter;

   cout << "Enter an integer, a double, and a character: ";
   cin >> whole >> fractional >> letter;
   cout << "Whole: " << whole << endl;
   cout << "Fractional: " << fractional << endl;
   cout << "Letter: " << letter << endl;
   return 0;
}