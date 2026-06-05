// Programming Assignment 2
// Programming Fundamentals II (COSC 1437)
// Author: Andy Nguyen
// Description: Calculates weekly summer job pay with tax and bonus.
 
#include <iostream>
#include <iomanip>      // needed for fixed and setprecision
// TODO Part A: include the <string> header
#include <string>
 
using namespace std;

int main()
{
    // TODO Part B: declare named constants TAX_RATE and BONUS
    const double TAX_RATE = 0.14;
    const int BONUS = 50;
 
 
    // TODO Part C: declare your variables (name, payRate, hoursWorked,
    //              grossPay, tax, netPay)
    string name;
    double payRate;
    double hoursWorked;
    double grossPay, tax, netPay;
 
 
    // Format all decimal output to two places
    cout << fixed << setprecision(2);
 
    // TODO Part D: prompt for and read in name, payRate, hoursWorked
    cout << "Enter last name: ";
    // ...
    cin >> name;
 
    cout << "Enter hourly pay rate: ";
    // ...
    cin >> payRate;
 
    cout << "Enter hours worked this week: ";
    // ...
    cin >> hoursWorked;
 
    // TODO Part E: compute grossPay, tax, and netPay
    grossPay = (payRate * hoursWorked);
    tax = (grossPay * TAX_RATE);
    netPay = (grossPay - tax + BONUS);
 
    // TODO Part F: produce the formatted output shown in the assignment
    cout << endl;
    cout << "Employee: " << name << endl;
    // ... complete the rest of the output
    cout << "Pay Rate: $" << payRate << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Tax (14%): $" << tax << endl;
    cout << "Net Pay (after tax + $50 bonus): $" << netPay << endl;

 
 
    return 0;
}

/* output for Jacobson

Employee: Jacobson
Pay Rate: $15.50
Hours Worked: 48.30
Gross Pay: $748.65
Tax (14%): $104.81
Net Pay (after tax + $50 bonus): $693.84

*/

/* output for Crawford

Employee: Crawford
Pay Rate: $18.75
Hours Worked: 52.00
Gross Pay: $975.00
Tax (14%): $136.50
Net Pay (after tax + $50 bonus): $888.50

*/