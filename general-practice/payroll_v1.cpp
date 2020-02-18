// José Constantino Sánchez Curet

// files calls
#include <iostream>
#include <string>
#include <iomanip>

// iostream's namespace call
using namespace std;

// main function declaration
int main()
{

  // Employees Information
  string employeeName, employeeLastName, socialSecurity;
  double deduction, hoursWorked, overtimeWorked, overtimePayment, employeePayPerHour, employeeSalary;
  double grossSalary, netIncome;

  // Constant Declaration
  const double DEDUCT = 0.18;

  // INPUT  from user
  cout << "Enter employee Name: ";
  cin >> employeeName;

  cout << "Enter employee Last Name: ";
  cin >> employeeLastName;

  cout << "Enter Social Security: ";
  cin >> socialSecurity;

  cout << "Enter employee payment per hour: ";
  cin >> employeePayPerHour;

  cout << "Enter employee payment per overtime: ";
  cin >> overtimePayment;

  cout << "Enter total of hours worked without including overtime: ";
  cin >> hoursWorked;

  cout << "Enter overtime hours, if NONE type 0 " << endl;
  cin >> overtimeWorked;

  // PROCESS all users information

  grossSalary = (hoursWorked * employeePayPerHour) + (overtimeWorked * overtimePayment);
  deduction = DEDUCT * grossSalary;
  netIncome = grossSalary - deduction;

  // OUTPUT users information
  cout << endl;
  cout << "------------------------     PAYROLL     ---------------------" << endl;
  cout << employeeName << " " << employeeLastName << " week description: " << endl;
  cout << "Social Security Number: " << socialSecurity << endl;
  cout << "Payment per hours: " << employeePayPerHour << endl;
  cout << "Hours worked: " << hoursWorked << endl;
  cout << "Overtime worked: " << overtimeWorked << endl;

  cout << endl;
  cout << "---------------" << endl;
  cout << "Gross Salary: " << grossSalary << endl;
  cout << "Net Income: " << netIncome << endl;
  cout << endl;

  return 0;
}
