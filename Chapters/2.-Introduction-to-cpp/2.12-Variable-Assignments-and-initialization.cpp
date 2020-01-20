//--------------------------------------------------------------------------
2.12 VARIABLE ASSIGNMENTS AND INITIALIZATION
// This program shows variable initialization.
#include <iostream>
using namespace std;
int main()
{
	int month = 2, days = 28;
	
	cout << "Month " << month << " has " << days << " days.\n";
	return 0;
}

// Declaring Variables with the auto Key Word

// Additional Examples:
    
    auto interestRate = 12.0; // will be a double because the initialization value, 
    													// 12.0, is a double.
    auto stockCode = 'D';     // will be a char because the initialization value, 'D',
    													// is a char.
    auto customerNum = 459L;  // will be a long because the initialization value,
    													// 459L, is a long.