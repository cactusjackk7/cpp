// Program to Find Quotient and Remainder
#include <iostream>
using namespace std;

int main()
{
  int divisor, dividend, quotient, remainder;

  cout << "Enter dividend: ";
  cin >> divisor;

  quotient = dividend / divisor;
  remainder = dividend % divisor;

  cout << "Quotient = " << quotient << endl;
  cout << "Remainder = " << remainder;

  return 0;
}

