#include <iostream>
using namespace std;

void zeroBoth(int &x, int &y)
{
  x = 0;
  y = 0;
}

int main(int argc, char **argv)
{
  int var1 = 5;
  int var2 = 6;

  cout << var1 << " " << var2 << endl;

  zeroBoth(var1, var2);

  cout << var1 << " " << var2 << endl;

  return 0;
}
