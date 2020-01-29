#include "pet.h"

// Class Constructor
Pet::Pet(){
  // Initialize variables to default values
  mem_name = "";
  mem_age = 0;
  mem_type = "";
  mem_weight = 0;
}

// Functions (Getting)
string Pet::get_name(){
  return mem_name;
}

int Pet::get_age(){
  return mem_age;
}

string Pet::get_type(){
  return mem_type;
}

double Pet::get_weight(){
  return mem_weight;
}

// Functions (Setting)
void Pet::set_name(string name){
  mem_name = name;
}

void Pet::set_age(int age){
  mem_age = age;
}

void Pet::set_type(string type){
  mem_type = type;
}

void Pet::set_weight(double weight){
  mem_weight = weight;
}
