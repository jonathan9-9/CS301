#include "Bike.h"
#include <iostream>

Bike::Bike(const std::string &s) : Vehicle(s, 2) {}

void Bike::displayInfo() const {
  std::cout << "Bike -> ";
  Vehicle::displayInfo();
  std::cout << "\n";
}
