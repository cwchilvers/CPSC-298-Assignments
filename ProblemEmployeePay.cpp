#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int hours;
  double ssTax;
  double fedIncTax;
  double stateIncTax;
  int medInsur = 10;
  double takeHome;
  int pay = 16;

  // Ask for hours worked
  cout << "Hours worked:\n";
  cin >> hours;

  // Gross Pay
  pay = pay * hours;

  // Taxes
  ssTax = pay * .06;
  fedIncTax = pay * .14;
  stateIncTax = pay * .05;

  // Output
  cout << "\nGross Pay: " << pay << endl;
  cout << "\nSocial Security Tax: " << ssTax << endl;
  cout << "Federal Income Tax: " << fedIncTax << endl;
  cout << "State Income Tax: " << stateIncTax << endl;
  cout << "Medical Insurance: " << medInsur << endl;
  takeHome = pay - ssTax - fedIncTax - stateIncTax - medInsur;
  cout << "\nTake Home Pay: " << takeHome << endl;

  return 0;
}
