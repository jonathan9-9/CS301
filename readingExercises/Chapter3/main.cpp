#include "Bike.h"
#include "Car.h"
#include <iostream>

int main() {
  Car firstCar("Box-shaped");
  Bike firstBike("Orthogonal");

  firstCar.displayInfo();
  firstBike.displayInfo();

  return 0;
}
