#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Circle {
public:
  Circle(double r) : radius(r = 0.0) {} // Default Constructor
  Circle(double &r);                    // Constructor
  virtual ~Circle();                    // Destructor

  void setRadius(double radius);
  double getRadius() const;
  double getArea() const;
  double getDiameter() const;
  double getCircumference() const;
  void displayInformation() const;

private:
  double radius;
  double const pi = 3.14159;
};

#endif
