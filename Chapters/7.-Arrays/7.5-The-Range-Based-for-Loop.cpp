// 7.5 THE RANGE BASED FOR LOOP

// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;

int main()
{
   // Define an array of integers.
   int numbers[] = { 10, 20, 30, 40, 50 };

   // Display the values in the array.
   for (auto val : numbers)
      cout << val << endl;

   return 0;
}

// ----------------------------------------------

// This program demonstrates the range-based for loop.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus", 
                        "Neptune", "Pluto (a dwarf planet)" };
   
   cout << "Here are the planets:\n";

   // Display the values in the array.
   for (auto val : planets)
      cout << val << endl;

   return 0;
}


// --------------------------------------------------------

// This program uses a range-based for loop to
// modify the contents of an array.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 5;
   int numbers[5];

   // Get values for the array.
   for (auto &val : numbers)
   {
      cout << "Enter an integer value: ";
      cin >> val;
   }

   // Display the values in the array.
   cout << "Here are the values you entered:\n";
   for (auto val : numbers)
      cout << val << endl;

   return 0;
}