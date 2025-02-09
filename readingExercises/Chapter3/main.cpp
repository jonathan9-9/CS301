#include "Bike.h"
#include "Car.h"
#include <iostream>

int main() {
  Car firstCar("Box-shaped");   // derived class
  Bike firstBike("Orthogonal"); // derived class

  firstCar.displayInfo();
  firstBike.displayInfo();

  return 0;
}
