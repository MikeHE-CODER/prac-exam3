#include <iostream>
#include "AirCraft.h"
AirCraft::AirCraft(){}
AirCraft::AirCraft(int w):weight(w){};             // creates an Aircraft with weight w
void AirCraft::refuel(){this->refuel=1};               // Resets fuel back to 100%
void AirCraft::fly(int headwind, int minutes){numberOfFlights++;}; // headwind in km/h and minutes (time flying)
void AirCraft::set_weight(int weight){this->weight=weight;};
void AirCraft::set_fuel(float fuel){this->fuel=fuel;};
void AirCraft::set_numberOfFlights(int numberOfFlights){this->numberOfFlights=numberOfFlights;};
int AirCraft::get_weight(){return weight;};
float AirCraft::get_fuel(){return fuel;};
int AirCraft::get_numberOfFlights(){return numberOfFlights;};
