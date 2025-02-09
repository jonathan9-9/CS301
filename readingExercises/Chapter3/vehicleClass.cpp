#include "vehicleClass.h"
#include <iostream>

Vehicle::Vehicle(const std::string &c, int w) : color(c), numWheels(w) {}

Vehicle::~Vehicle() {}

std::string Vehicle::getColor() const { return color; }

int Vehicle::getNumWheels() const { return numWheels; }

void Vehicle::displayInfo() const {
  std::cout << "Color: " << color << ", Wheels: " << numWheels;
}
