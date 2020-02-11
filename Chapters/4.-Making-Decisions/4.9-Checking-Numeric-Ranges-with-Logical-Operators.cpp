// 4.9 CHECKING NUMERIC RANGES WITH LOGICAL OPERATORS

/*Logical operators are effective for determining whether
 a number is in or out of a range.*/

//Example 1

if (x >= 20 && x <= 40)
  cout << x << " is in the acceptable range.\n";

// Example 2
if (x < 20 || x > 40)
  cout << x << " is outside the acceptable range.\n";

// Example 3
if (x < 20 && x > 40)
  cout << x << " is outside the acceptable range.\n";
