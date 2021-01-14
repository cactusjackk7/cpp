// Program to Add Two Numbers
#include <iostream>
using namespace std;

int main() {
  int firstNumber, secondNumber, sumOfTwoNumbers;

  cout << "Enter two integers: ";
  cin >> firstNumber >> secondNumber;

  //  sumOfTwoNumbers in stored in var sumOfTwoNumbers
  sumOfTwoNumbers = firstNumber + secondNumber;

  // prints sum
  cout << firstNumber << "+" << secondNumber << " = " << sumOfTwoNumbers;

  return 0;
}
