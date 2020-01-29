#include <iostream>
#include <cctype>
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

// Quit function
int quit (int x){
  // Ask for input
  cout << "\nExit program? (0 = Exit): ";
  cin >> x;
  if (x != 0){
    x = 1;
  }
  cout << "\n\n";
  // Return value
  return x;
}

// Main
int main(int argc, char **argv)
{
  int program = 1;
  float length;

  while(program == 1){

    length = userInput();
    length = calculate(length);
    output(length);

    // Quit
    program = quit(program);
  }


  return 0;
}
