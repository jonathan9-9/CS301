#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(double r) : radius(r) {}

Circle::~Circle() {}

void Circle::setRadius(double r) { radius = r; }

double Circle::getRadius() const { return radius; }

double Circle::getArea() const { return pi * radius * radius; }

double Circle::getDiameter() const { return radius * 2; }

double Circle::getCircumference() const { return 2 * pi * radius; }

void Circle::displayInformation() const {
  std::cout << "Circle Area: " << getArea()
            << "\nCircle Diameter: " << getDiameter()
            << "\nCircle Circumference: " << getCircumference() << std::endl;
}
