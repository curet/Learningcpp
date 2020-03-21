// file: reserv-opertor.cpp
// name: José C.S. Curet
// purpose: practice with some operator's reserved words

#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 5;
	int c = 6;

	if(a not_eq b){cout<< "a is not equal to b" << endl;}
	
	// the not after the 'or' in the expression is going to give me an error ---> if(a not_eq b or a not= c){ cout << "a is not equal to b and not equal to c" << endl;}

	if(a not_eq b or a != c){ cout << "a is not equal to b and not equal to c" << endl;}

	cout << "\a\nEnd of test!" << endl;
	return 0;
}
