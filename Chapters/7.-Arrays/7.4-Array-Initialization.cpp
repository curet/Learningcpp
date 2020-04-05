// 7.4 ARRAY INITIALIZATION

// This program displays the number of days in each month.
#include <iostream>
using namespace std;

int main()
{
   const int MONTHS = 12;
   int days[MONTHS] = { 31, 28, 31, 30,
                        31, 30, 31, 31,
                        30, 31, 30, 31};

   for (int count = 0; count < MONTHS; count++)
   {
      cout << "Month " << (count + 1) << " has ";
      cout << days[count] << " days.\n";
   }
   return 0;
}

// --------------------------------------------------

// This program initializes a string array.
#include<iostream>
#include<string>
using namespace std;

int main()
{
	const int SIZE = 9;
	string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars",
		                     "Jupiter", "Saturn", "Uranus",
							 "Neptune", "Pluto (a dwarf planet)" };

	cout << "Here are the planets:\n";

	for (int count = 0; count < SIZE; count++)
	   cout << planets[count] << endl;
	return 0;
}

// --------------------------------------------------

// This program uses an array of ten characters to store the
// first ten Letters of the alphabet. The ASCII codes of the
// characters are displayed.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_LETTERS = 10;
   char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
                                'F', 'G', 'H', 'I', 'J'};

   cout << "Character" << "\t" << "ASCII Code\n";
   cout << "---------" << "\t" << "----------\n";
   for (int count = 0; count < NUM_LETTERS; count++)
   {
      cout << letters[count] << "\t\t";
      cout << static_cast<int>(letters[count]) << endl;
   }
   return 0;
}

// --------------------------------------------------

// This program has a partially initialized array.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 7;
   int numbers[SIZE] = {1, 2, 4, 8}; // Initialize first 4 elements

   cout << "Here are the contents of the array:\n";
   for (int index = 0; index < SIZE; index++)
      cout << numbers[index] << " ";

   cout << endl;
   return 0;
}