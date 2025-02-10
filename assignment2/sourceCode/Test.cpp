#include "Circle.cpp"
#include <iostream>

int main() {
  double radius;

  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  Circle circle(radius);

  circle.displayInformation();
}
