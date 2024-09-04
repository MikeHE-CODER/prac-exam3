#include "Helicopter.h"
#include "AirCraft.h"
#include <iostream>
#include <string.h>
using namespace std;
Helicopter::Helicopter(int w, string n) : name(n) {
  this->set_weight(w);
} // creates a Helicopter with weight w and name n
string Helicopter::get_name() { return name; };
void Helicopter::set_name(string a) { this->name = a; };
void Helicopter::fly(int headwind, int minutes) {
  float chushi = get_fuel();
  if (headwind < 40) {
    this->set_fuel(this->get_fuel() - 0.002 * minutes);
  } else {
    this->set_fuel(this->get_fuel() - 0.004 * minutes);
  }
  if (this->get_weight() > 5670) {
    this->set_weight(this->get_fuel()-0.0001 * minutes);
  }
  if (this->get_fuel() < 0.2) {
    this->set_fuel(chushi);
  } else {
    this->set_numberOfFlights(this->get_numberOfFlights() + 1);
  }
}
