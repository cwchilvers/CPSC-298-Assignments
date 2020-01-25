#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int numPeople;
  int roomCap;

  // Input
  cout << "How many people will attend this meeting?\n";
  cin >> numPeople;
  cout << "\nWhat is the capacity of the room according to fire regulations?\n";
  cin >> roomCap;

  //Output
  if(numPeople <= roomCap) {
    cout << "\nY'all are safe to proceed with the meeting.\n";
  }

  else {
    cout << "\nThis is totally unsafe and illegal.";
    numPeople = numPeople - roomCap;
    cout << "\nDO NOT PROCEED WITH THE MEETING UNLESS " << numPeople << " PEOPLE ARE ELIMINATED.\n";
  }

  return 0;
}
