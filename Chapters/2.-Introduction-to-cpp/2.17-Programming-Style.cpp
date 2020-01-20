// 2.17 PROGRAMMING STYLE

// This program lacks programming style but still run

#include <iostream>
using namespace std;int main(){double shares=220.0;
double avgPrice=14.67;cout<<"There were "<<shares
<<" shares sold at $"<<avgPrice<<" per share.\n";
return 0;}

//--------------------------------------------------------------------------

// This example is much more readable than Program 2-29.
#include <iostream>
using namespace std;

int main()
{
    double shares = 220.0;
    double avgPrice = 14.67;

    cout << "There were " << shares << " shares sold at $";
    cout << avgPrice << " per share.\n";
    return 0;
    
}

//--------------------------------------------------------------------------

// Example of a cout statement that uses five lines:

		cout << "The Fahrenheit temperature is "
				 << fahrenheit
				 << " and the Celsius temperature is "
				 << celsius
				 << endl;

//--------------------------------------------------------------------------

// Variable definitions treated similarly
int fahrenheit,
		celsius,
		kelvin;

