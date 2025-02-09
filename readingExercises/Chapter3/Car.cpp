#include "Car.h"
#include <iostream>

Car::Car(const std::string &s) : Vehicle(s, 12) {}

void Car::displayInfo() const {
  std::cout << "Car -> ";
  Vehicle::displayInfo();
  std::cout << "\n";
}
