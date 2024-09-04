#include "Helicopter.h"
#include <iostream>
#include <string.h>
using namespace std;
Helicopter::Helicopter(int w, string n) :weight(w),name(n){}    // creates a Helicopter with weight w and name n
string Helicopter::get_name(){return name;};     
void Helicopter::set_name(string a){this->name=a;};            
void Helicopter::fly(int headwind, int minutes){
    float chushi=get_fuel;
    if (headwind<40){
        this->get_fuel-=0.002*minutes;
    }else{
        this->get_fuel-=0.004*minutes;
    }
    if (this->get_weight>5670){
        this->get_weight-=0.0001*minutes;
    }
    if (this->fuel<0.2){
        this->fuel=chushi;
    }else{
        this->set_numberOfFlights(this->get_numberOfFlights++);
    }
}
