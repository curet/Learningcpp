// 7.2 ACCESSING ARRAY ELEMENTS

// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 6;
   int hours[NUM_EMPLOYEES];
   
   // Get the hours worked by each employee.
   cout << "Enter the hours worked by "
        << NUM_EMPLOYEES << " employees: ";
   cin >> hours[0];
   cin >> hours[1];
   cin >> hours[2];
   cin >> hours[3];
   cin >> hours[4];
   cin >> hours[5];
   
   // Display the values in the array.
   cout << "The hours you entered are:";
   cout << " " << hours[0];
   cout << " " << hours[1];
   cout << " " << hours[2];
   cout << " " << hours[3];
   cout << " " << hours[4];
   cout << " " << hours[5] << endl;
   return 0;
}

// -----------------------------------------------------------------

// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_EMPLOYEES = 6; // Number of employees
   int hours[NUM_EMPLOYEES];    // Each employee's hours
   int count;                   // Loop counter

   // Input the hours worked.
   for (count = 0; count < NUM_EMPLOYEES; count++)
   {
      cout << "Enter the hours worked by employee "
           << (count + 1) << ": ";
      cin >> hours[count];
   }

   // Display the contents of the array.
   cout << "The hours you entered are:";
   for (count = 0; count < NUM_EMPLOYEES; count++)
      cout << " " << hours[count];
   cout << endl;
   return 0;
}

// -----------------------------------------------------------------

// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10; // Array size
	int numbers[ARRAY_SIZE];   // Array with 10 elements
	int count = 0;             // Loop counter variable
	ifstream inputFile;        // Input file stream object
	
	// Open the file.
	inputFile.open("TenNumbers.txt"); 
	
	// Read the numbers from the file into the array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
       count++;
	
	// Close the file.
	inputFile.close();
	
	// Display the numbers read:
	cout << "The numbers are: ";
	for (count = 0; count < ARRAY_SIZE; count++)
       cout << numbers[count] << " ";
	cout << endl;
	return 0;
}

// -----------------------------------------------------------------

// This program writes the contents of an array to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int ARRAY_SIZE = 10;  // Array size
   int numbers[ARRAY_SIZE];    // Array with 10 elements
   int count;                  // Loop counter variable
   ofstream outputFile;        // Output file stream object
   
   // Store values in the array.
   for (count = 0; count < ARRAY_SIZE; count++)
      numbers[count] = count;
      
   // Open a file for output.
   outputFile.open("SavedNumbers.txt");
   
   // Write the array contents to the file.
   for (count = 0; count < ARRAY_SIZE; count++)
      outputFile << numbers[count] << endl;
   
   // Close the file.
   outputFile.close();
   
   // That's it!
   cout << "The numbers were saved to the file.\n ";
   return 0;
}