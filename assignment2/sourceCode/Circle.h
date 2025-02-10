#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>

class Circle {
public:
  Circle();         // Default Constructor
  Circle(double r); // Constructor
  ~Circle();        // Destructor

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
