#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main() { 
	Car car;
	
	car.setType("Honda");
	cout << "This car is a " << car.getType() << "." << endl;
	
	car.setDoors(4);
	cout << "It has " << car.getDoors() << " doors." << endl;

}
