#include "vehicleClass.h"
#include <iostream>

Vehicle::Vehicle(const std::string &s, int w) : shape(s), numWheels(w) {}

Vehicle::~Vehicle() {}

std::string Vehicle::getShape() const { return shape; }

int Vehicle::getNumWheels() const { return numWheels; }

void Vehicle::displayInfo() const {
  std::cout << "Shape: " << shape << ", Wheels: " << numWheels;
}
