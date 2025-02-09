#include <cmath>
#include <iostream>

class Shape {
public:
  virtual double getArea() const = 0;
  virtual double getPerimeter() const = 0;
};
