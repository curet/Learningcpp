// 6.13 USING REFERENCE VARIABLES AS PARAMETERS

// This program uses a reference variable as a function
// parameter.
#include <iostream>
using namespace std;

// Function prototype. The parameter is a reference variable.
void doubleNum(int &);

int main()
{
   int value = 4;

   cout << "In main, value is " << value << endl;
   cout << "Now calling doubleNum..." << endl;
   doubleNum(value);
   cout << "Now back in main. value is " << value << endl;
   return 0;
}

//**********************************************************
// Definition of doubleNum.                                *
// The parameter refVar is a reference variable. The value *
// in refVar is doubled.                                   *
//**********************************************************

void doubleNum (int &refVar)
{
   refVar *= 2;
}

// ----------------------------------------------------------

// This program uses reference variables as function parameters.
#include <iostream>
using namespace std;

// Function prototypes. Both functions use reference variables
// as parameters.
void doubleNum(int &);
void getNum(int &);

int main()
{
   int value;
   
   // Get a number and store it in value.
   getNum(value);
   
   // Double the number stored in value.
   doubleNum(value);
   
   // Display the resulting number.
   cout << "That value doubled is " << value << endl;
   return 0;
}

//*************************************************************
// Definition of getNum.                                      *
// The parameter userNum is a reference variable. The user is *
// asked to enter a number, which is stored in userNum.       *
//*************************************************************

void getNum(int &userNum)
{
   cout << "Enter a number: ";
   cin >> userNum;
}

//**********************************************************
// Definition of doubleNum.                                *
// The parameter refVar is a reference variable. The value *
// in refVar is doubled.                                   *
//**********************************************************

void doubleNum (int &refVar)
{
   refVar *= 2;
}