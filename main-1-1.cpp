#include "AirCraft.h"
#include <iostream>
using namespace std;
int main(){
    AirCraft a;
    AirCraft b(3);
    a.set_fuel(0.4);
    a.set_numberOfFlights(3);
    a.set_weight(100);
    a.fly(3,4);
    a.get_fuel;
    a.get_numberOfFlights;
    a.get_weight;
    a.refuel;

}
