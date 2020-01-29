#include <iostream>
#include <string>

using namespace std;

// Pet Class
class Pet {
  public:
    // Constructor
    Pet();

    // Accessors
    string get_name();
    int get_age();
    string get_type();
    double get_weight();

    // Mutators
    void set_name(string name);
    void set_age(int age);
    void set_type(string type);
    void set_weight(double weight);

  private:
    // Members
    string mem_name;
    int mem_age;
    string mem_type;
    double mem_weight;
};
