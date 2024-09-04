#ifndef AirCraft_h
#define Helicopter_H
#include "AirCraft.h"
#include <iostream>
#include <string.h>
class Helicopter : public AirCraft {
public:
  Helicopter(int w, string n); // creates a Helicopter with weight w and name n
  string get_name();
  void set_name(string a);
  void fly(int headwind, int minutes);

private:
  std::string name; // name of the Helicopter
};
#endif
