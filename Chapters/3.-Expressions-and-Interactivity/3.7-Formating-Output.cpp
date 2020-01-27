// 3.7 FORMATING OUTPUT

// This program displays three rows of numbers.
#include <iostream>
using namespace std;

int main()
{
   int num1 = 2897, num2 = 5,    num3 = 837,
       num4 = 34,   num5 = 7,    num6 = 1623,
       num7 = 390,  num8 = 3456, num9 = 12;
   
   // Display the first row of numbers
   cout << num1 << "  " << num2 << "  " << num3 << endl;

   // Display the second row of numbers
   cout << num4 << "  " << num5 << "  " << num6 << endl;

   // Display the third row of numbers
   cout << num7 << "  " << num8 << "  " << num9 << endl;
   return 0;
}

//--------------------------------------------------------------------------

// This program displays three rows of numbers.
#include <iostream>
#include <iomanip>      // Required for setw
using namespace std;

int main()
{
   int num1 = 2897, num2 = 5,    num3 = 837,
       num4 = 34,   num5 = 7,    num6 = 1623,
       num7 = 390,  num8 = 3456, num9 = 12;
   
   // Display the first row of numbers
   cout << setw(6) << num1 << setw(6) 
        << num2 << setw(6) << num3 << endl;

   // Display the second row of numbers
   cout << setw(6) << num4 << setw(6) 
        << num5 << setw(6) << num6 << endl;

   // Display the third row of numbers
   cout << setw(6) << num7 << setw(6) 
        << num8 << setw(6) << num9 << endl;
   return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates the setw manipulator being
// used with values of various data types.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   int intValue = 3928;
   double doubleValue = 91.5;
   string stringValue = "John J. Smith";

   cout << "(" << setw(5) << intValue << ")" << endl;
   cout << "(" << setw(8) << doubleValue << ")" << endl;
   cout << "(" << setw(16) << stringValue << ")" << endl;
   return 0;
}   

//--------------------------------------------------------------------------

// This program demonstrates how setprecision rounds a
// floating point value.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double quotient, number1 = 132.364, number2 = 26.91;

   quotient = number1 / number2;
   cout << quotient << endl;
   cout << setprecision(5) << quotient << endl;
   cout << setprecision(4) << quotient << endl;
   cout << setprecision(3) << quotient << endl;
   cout << setprecision(2) << quotient << endl;
   cout << setprecision(1) << quotient << endl;
   return 0;
} 

//--------------------------------------------------------------------------

// This program asks for sales figures for 3 days. The total
// sales are calculated and displayed in a table.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double day1, day2, day3, total;

   // Get the sales for each day.
   cout << "Enter the sales for day 1: ";
   cin >> day1;
   cout << "Enter the sales for day 2: ";
   cin >> day2;
   cout << "Enter the sales for day 3: ";
   cin >> day3;
   
   // Calculate the total sales.
   total = day1 + day2 + day3;
   
   // Display the sales figures.
   cout << "\nSales Figures\n";
   cout << "-------------\n";
   cout << setprecision(5);
   cout << "Day 1: " << setw(8) << day1 << endl;
   cout << "Day 2: " << setw(8) << day2 << endl;
   cout << "Day 3: " << setw(8) << day3 << endl;
   cout << "Total: " << setw(8) << total << endl;
   return 0;
} 

//--------------------------------------------------------------------------

// This program asks for sales figures for 3 days. The total
// sales are calculated and displayed in a table.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double day1, day2, day3, total;

   // Get the sales for each day.
   cout << "Enter the sales for day 1: ";
   cin >> day1;
   cout << "Enter the sales for day 2: ";
   cin >> day2;
   cout << "Enter the sales for day 3: ";
   cin >> day3;
   
   // Calculate the total sales.
   total = day1 + day2 + day3;
   
   // Display the sales figures.
   cout << "\nSales Figures\n";
   cout << "-------------\n";
   cout << setprecision(2) << fixed;
   cout << "Day 1: " << setw(8) << day1 << endl;
   cout << "Day 2: " << setw(8) << day2 << endl;
   cout << "Day 3: " << setw(8) << day3 << endl;
   cout << "Total: " << setw(8) << total << endl;
   return 0;
}




