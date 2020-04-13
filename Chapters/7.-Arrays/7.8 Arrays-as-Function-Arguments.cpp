// 7.8 ARRAYS AS FUNCTION ARGUMENTS

// This program demonstrates that an array element is passed
// to a function like any other variable.
#include <iostream>
using namespace std;

void showValue(int); // Function prototype

int main()
{
   const int SIZE = 8;
   int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

   for (int index = 0; index < SIZE; index++)
      showValue(numbers[index]);
   return 0;
}

//**********************************************
// Definition of function showValue.           *
// This function accepts an integer argument.  *
// The value of the argument is displayed.     *
//**********************************************

void showValue(int num)
{
   cout << num << " ";
}

// ------------------------------------------------------

// This program demonstrates an array being passed to a function.
#include <iostream>
using namespace std;

void showValues(int [], int); // Function prototype

int main()
{
   const int ARRAY_SIZE = 8;
   int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

   showValues(numbers, ARRAY_SIZE);
   return 0;
}

//**************************************************
// Definition of function showValue.               *
// This function accepts an array of integers and  *
// the array's size as its arguments. The contents *
// of the array are displayed.                     * 
//**************************************************

void showValues(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}

// --------------------------------------------------------------

// This program demonstrates the showValues function being
// used to display the contents of two arrays.
#include <iostream>
using namespace std;

void showValues(int [], int); // Function prototype

int main()
{
   const int SIZE1 = 8; // Size of set1 array
   const int SIZE2 = 5; // Size of set2 array
   int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
   int set2[SIZE2] = {2, 4, 6, 8, 10};

   // Pass set1 to showValues.
   showValues(set1, SIZE1);
   
   // Pass set2 to showValues.
   showValues(set2, SIZE2);
   return 0;
}

//**************************************************
// Definition of function showValues.              *
// This function accepts an array of integers and  *
// the array's size as its arguments. The contents *
// of the array are displayed.                     * 
//**************************************************

void showValues(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}

// -----------------------------------------------------

// This program uses a function to double the value of
// each element of an array.
#include <iostream>
using namespace std;

// Function prototypes
void doubleArray(int [], int);
void showValues(int [], int);

int main()
{
   const int ARRAY_SIZE = 7;
   int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

   // Display the initial values.
   cout << "The arrays values are:\n";
   showValues(set, ARRAY_SIZE);

   // Double the values in the array.
   doubleArray(set, ARRAY_SIZE);

   // Display the resulting values.
   cout << "After calling doubleArray the values are:\n";
   showValues(set, ARRAY_SIZE);

   return 0;
}

//*****************************************************
// Definition of function doubleArray                 *
// This function doubles the value of each element    *
// in the array passed into nums. The value passed    *
// into size is the number of elements in the array.  *
//*****************************************************

void doubleArray(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      nums[index] *= 2;
}

//**************************************************
// Definition of function showValues.              *
// This function accepts an array of integers and  *
// the array's size as its arguments. The contents *
// of the array are displayed.                     * 
//**************************************************

void showValues(int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}

// -----------------------------------------------------

// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
   const int SIZE = 4;      // Array size
   double testScores[SIZE], // Array of test scores
          total,            // Total of the scores
          lowestScore,      // Lowest test score
          average;          // Average test score

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Get the test scores from the user.
   getTestScores(testScores, SIZE);

   // Get the total of the test scores.
   total = getTotal(testScores, SIZE);

   // Get the lowest test score.
   lowestScore = getLowest(testScores, SIZE);

   // Subtract the lowest score from the total.
   total -= lowestScore;

   // Calculate the average. Divide by 3 because
   // the lowest test score was dropped.
   average = total / (SIZE - 1);

   // Display the average.
   cout << "The average with the lowest score "
       << "dropped is " << average << ".\n";

   return 0;
}

//************************************************************
// The getTestScores function accepts an array and its size  *
// as arguments. It prompts the user to enter test scores,   *
// which are stored in the array.                            *
//************************************************************

void getTestScores(double scores[], int size)
{
   // Loop counter
   int index;
   
   // Get each test score.
   for(index = 0; index <= size - 1; index++)
   {
      cout << "Enter test score number " 
           << (index + 1) << ": ";
      cin >> scores[index];
   }
}

//****************************************************
// The getTotal function accepts a double array      *
// and its size as arguments. The sum of the array's *
// elements is returned as a double.                 *
//****************************************************

double getTotal(const double array[], int size)
{
   double total = 0; // Accumulator

   // Add each element to total.
   for (int count = 0; count < size; count++)
      total += array[count];

   // Return the total.
   return total;
}

//****************************************************
// The getLowest function accepts a double array and *
// its size as arguments. The lowest value in the    *
// array is returned as a double.                    *
//****************************************************

double getLowest(const double array[], int size)
{
   double lowest;  // To hold the lowest value

   // Get the first array's first element.
   lowest = array[0];

   // Step through the rest of the array. When a
   // value less than lowest is found, assign it
   // to lowest.
   for (int count = 1; count < size; count++)
   {
      if (array[count] < lowest)
         lowest = array[count];
   }

   // Return the lowest value.
   return lowest;
}