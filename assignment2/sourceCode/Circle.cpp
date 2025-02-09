#include "Circle.h"
#include <iostream>
#include <string>

Circle::Circle(double &r) : radius(r) {}

Circle::~Circle() {}

void Circle::setRadius(double r) { radius = r; }
