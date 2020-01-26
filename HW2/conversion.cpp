#include <iostream>
using namespace std;

// Functions
float userInput ()
{
  float ft;
  float in;

  cout << "\nEnter length of item in feet and inches.";
  cout << "\nFeet: ";
  cin >> ft;
  cout << "\nInches: ";
  cin >> in;

  // Convert inches to decimal foot
  in = in/12;
  // Add to ft
  ft = ft + in;

  return ft;
}

float calculate (float x)
{
  x = x * 0.3048;

  return x;
}

float output (float x)
{
  cout << "\n" << x << "m\n";
}

// Main
int main(int argc, char **argv)
{
  float length;

  length = userInput();
  length = calculate(length);
  output(length);

  return 0;
}
