#include "pet.h"

// Main
int main(int argc, char **argv){
  // Create Pet 1
  Pet pet1;
  pet1.set_name("Giselle");
  pet1.set_age(7);
  pet1.set_type("Dog");
  pet1.set_weight(42.3);

  // Create Pet 2
  Pet pet2;
  pet2.set_name("Bean");
  pet2.set_age(1);
  pet2.set_type("Cat");
  pet2.set_weight(9.6);

  // Pet 1 Details
  cout << endl << pet1.get_name() << endl;
  cout << "Type: " << pet1.get_type() << endl;
  cout << "Age: " << pet1.get_age() << endl;
  cout << "Weight: " << pet1.get_weight() << " lbs\n";

  // Pet 2 Details
  cout << endl << pet2.get_name() << endl;
  cout << "Type: " << pet2.get_type() << endl;
  cout << "Age: " << pet2.get_age() << endl;
  cout << "Weight: " << pet2.get_weight() << " lbs\n";

  return 0;
}
