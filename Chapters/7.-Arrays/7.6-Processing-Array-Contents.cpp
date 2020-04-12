// 7.6 PROCESSING ARRAY CONTENTS

// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 5;   // Number of employees
   int hours[NUM_EMPLOYEES];      // Array to hold hours
   double payrate;                // Hourly pay rate
   double grossPay;               // To hold the gross pay

   // Input the hours worked.
   cout << "Enter the hours worked by ";
   cout << NUM_EMPLOYEES << " employees who all\n";
   cout << "earn the same hourly rate.\n";
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
      cout << "Employee #" << (index + 1) << ": ";
      cin >> hours[index];
   }

   // Input the hourly rate for all employees.
   cout << "Enter the hourly pay rate for all the employees: ";
   cin >> payrate;

   // Display each employee's gross pay.
   cout << "Here is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
      grossPay = hours[index] * payrate;
      cout << "Employee #" << (index + 1);
      cout << ": $" << grossPay << endl;
   }
   return 0;
}

// ---------------------------------------------------------------

// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int ARRAY_SIZE = 100; // Array size
   int numbers[ARRAY_SIZE];    // Array with 100 elements
   int count = 0;              // Loop counter variable
   ifstream inputFile;         // Input file stream object
   
   inputFile.open("numbers.txt"); // Open the file.
   
   // Read the numbers from the file into the array.
   // After this loop executes, the count variable will hold
   // the number of values that were stored in the array.
   while (count < ARRAY_SIZE && inputFile >> numbers[count])
      count++;
   
   // Close the file.
   inputFile.close();
   
   // Display the numbers read.
   cout << "The numbers are: ";
   for (int index = 0; index < count; index++)
      cout << numbers[index] << " ";
   cout << endl;
   return 0;
}