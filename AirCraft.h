#ifndef AirCraft_h
#define AirCraft_h
#include <iostream>
using namespace std;
class AirCraft {
public:
  AirCraft();
  AirCraft(int w); // creates an Aircraft with weight w
  void refuel();   // Resets fuel back to 100%
  virtual void fly(int headwind,
                   int minutes); // headwind in km/h and minutes (time flying)
  void set_weight(int weight);
  void set_fuel(float fuel);
  void set_numberOfFlights(int numberOfFlights);
  int get_weight();
  float get_fuel();
  int get_numberOfFlights();

private:
  int weight;              // the weight of AirCraft
  float fuel = 1;          // fuel percentage, initially 100%
  int numberOfFlights = 0; // initially 0
};
#endif
