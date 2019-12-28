//Practicing while Loop
#include <iostream>
using namespace std;

//practicing creating while loop
int main()
{
    int a;

    cout << "Enter number: ";
    cin >> a;

    while (a < 1)
    {
        cout << "Please enter number greater than 1: ";
        cin >> a;
    }
}

//----------------------------------------------------------------------------------------------

// 5.2 Write an input validation loop that asks the user 
// to enter a number in the range of 10 through 25

int number;

cout << "Enter a number: ";
cin >> number;

while (number < 10 || number > 25)
{
	cout << "Please enter a number between 10 and 25";
	cin >> number;
}

//----------------------------------------------------------------------------------------------

// 5.3 Write an input validation loop that asks the user
// to enter 'Y', 'y', 'N', or 'n'

char ch;

cout << "Enter Y', 'y', 'N', or 'n" ;
cin >> ch;
while( ch != 'Y' || ch != 'y' || ch != 'N' || ch != 'n')
{
	cout << "Enter Y', 'y', 'N', or 'n" ;
	cin >> ch;
}

// CORRECT ANSWER: VERIFY WHY IT IS USED &&.... I IMAGINED || WAS CORRECT!!!

char letter;
cout << "Enter Y for yes or N for no: ";
cin >> letter;
while (letter != 'Y' && letter != 'y' &&
			 letter != 'N' && letter != 'n')
{
cout << "Error! Enter either Y or N: "; cin >> letter;
}

//----------------------------------------------------------------------------------------------

//5.4 Write an input validation that ask the user to enter 'Yes'  or 'No'

string word;

cout << "Enter Yes  or No " << endl;
cin >> word;
while(word != 'Yes' && word != 'No')
{
	cout << "Enter Yes  or No " << endl;
}

// CORRECT ANSWER:Note --> 'Yes' is going to give me an error, I must write --> "Yes"

string input;
cout << "Enter Yes or No: ";
cin >> input;
while ( (input != "Yes") && (input != "No") ) {
cout << "Error! Enter either Yes or No: ";
cin >> input; }

//----------------------------------------------------------------------------------------------

//Practicing
int MINIMUM = 1;
int num = MINIMUM;
int MAXIMUM = 10;

while(num < MAXIMUM)
{
    int count;
    cout << "working... " << count << endl;
    num++;
    count++;
}

//Converting to for loop from memory
int MINIMUM = 1;
int MAXIMUM = 10;
for(int num = MINIMUM; num <MAXIMUM; num++)
{
    int count;
    cout << "working... " << count << endl;
    count++;
}

//----------------------------------------------------------------------------------------------

// Using multiple statements in the initialization

int MINIMUM;
int MAXIMUM;

cout << "Enter Minimum" << endl;
cin >> MINIMUM;
cout << "Enter Maximum" << endl;
cin >> MAXIMUM;

int num, count;

for(int num = MINIMUM, count; num <MAXIMUM; num++, count++)
{
    cout << "working... " << count << endl;
}

//----------------------------------------------------------------------------------------------


#include <fstream>

//The fstream header file defines the data types ofstream, ifstream, and fstream.


//----------------------------------------------------------------------------------------------


//The following code shows an example of opening a file for input (reading).

ifstream inputFile;
inputFile.open("Customers.txt");


//The following code shows an example of opening a file for output (writing).

ofstream outputFile;
outputFile.open("Employees.txt");


//----------------------------------------------------------------------------------------------


// It is possible to define a file stream object and open a file in one statement.
// Here is an example:

ifstream inputFile("Customers.txt");

// This statement defines an ifstream object named inputFile and opens
// the Customer.txt file. 


// Here is an example that defines an ofstream object named outputFile and opens
// the Employees.txt file:

ofstream outputFile("Employees.txt");

//----------------------------------------------------------------------------------------------

// Calling the file stream object’s close member function
// closes a file. Here is an example: 

inputFile.close();

// Writing data to a file
//Examples:

outputFile << "I love C++ programming\n";
outputFile << "Price: " << price << endl;

// Reading data from a file
//Example:

inputFile >> name;

//----------------------------------------------------------------------------------------------

// Using loops to process files
for (int count = 1; count <= numberOfDays; count++)
{
		//Get the sales for a day.
		cout << "Enter the sales for day "
				 << count << ": ";
		cin >> sales;
	
		// Write the sales to the file.
		outputFile << sales << endl;
}

		// Close the file.
		outputFile.close();
		cout << "Data written to Sales.txt\n";
		retun 0;
    
    
    
//----------------------------------------------------------------------------------------------

// Detecting the end of a file

 // The following program contains a list of numbers. 
// Without knowing how many numbers the file contains.

int main()
{
	ifstream inputFile;
	int number;

	// Open the file.
	inputFile.open("ListOfNumbers.txt");

	// Read the numbers from the file and
	// display them.

	while (inputFile >> number)  <-- this statement is used as the Boolean expression.
	{
			cout << number << endl;
	}
	
	// Close the file.
	inputFile.close();
	return 0;
}

//The Boolean expression works as follows:
// 1. The expression inputFile >> number executes.
// 2. If an item is successfully read from the file, the item is stored
//    in the number variable, and the expression returns true to indicate
//    that it succeeded.
// 3. If there are no more items to read from the file, the expression
//    inputFile >> number returns false, indicating that it did not read a value.


//----------------------------------------------------------------------------------------------

// To detect failed attempt to open a file


ifstream inputFile;
inputFile.open("customers.txt");
if (inputFile.fail())
{
	cout << "Error opening file.\n";
}
else
{
	// Process the file.
}

// The fail member function returns true when an attempted file operation
// is unsuccessful.

//----------------------------------------------------------------------------------------------
// Using the c_str (also known as C-String) Member Function in Older Versions of C++

//Example:

stringObject.c_str()

// The previous program can be rewritten as follows:

inputFile.open(filename.c_str());

// In this version of the statement, the value that is returned
// from filename.c_str() is passed as an argument to the open function.
