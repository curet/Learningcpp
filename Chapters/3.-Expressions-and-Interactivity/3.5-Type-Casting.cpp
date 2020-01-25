// 3.5 TYPE CASTING

// This program uses a type cast to avoid integer division.
#include <iostream>
using namespace std;

int main()
{
   int books;        // Number of books to read
   int months;       // Number of months spent reading
   double perMonth;  // Average number of books per month

   cout << "How many books do you plan to read? ";
   cin >> books;
   cout << "How many months will it take you to read them? ";
   cin >> months;
   perMonth = static_cast<double>(books) / months;
   cout << "That is " << perMonth << " books per month.\n";
   return 0;
} 

//--------------------------------------------------------------------------

// This program uses a type cast expression to print a character
// from a number.
#include <iostream>
using namespace std;

int main()
{
   int number = 65;
   
   // Display the value of the number variable.
   cout << number << endl;
   
   // Display the value of number converted to
   // the char data type.
   cout << static_cast<char>(number) << endl;
   return 0;
}

