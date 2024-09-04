#ifndef Helicopter_h
#define Helicopter_h
using namespace std;
#include <iostream>
#include <string.h>
class Helicopter:public AirCraft{
public:
Helicopter(int w, string n)     // creates a Helicopter with weight w and name n
string get_name();   
void set_name(string a)     
void fly(int headwind, int minutes);
private:
string name;  // name of the Helicopter
}
