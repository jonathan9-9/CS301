#include <cmath>
#include <iostream>

class Shape {
public:
  virtual double getArea() const = 0; // pure virtual functions
  virtual double getPerimeter() const = 0;
  virtual void displayInformation() const = 0;

private:
  double width; // Instance Variables
  double length;
};

class Circle : public Shape {
public:
  Circle(double r) : radius(r) {}

  double getArea() const { return M_PI * radius * radius; }

  double getPerimeter() const { return 2 * M_PI * radius; }

  void displayInformation() const {
    std::cout << "Area of Circle: " << getArea()
              << "\nCircumference of Circle: " << getPerimeter() << "\n";
  }

private:
  double radius;
};

class Rectangle : public Shape {
public:
  Rectangle(double l, double w) : length(l), width(w) {}

  double getArea() const { return length * width; }

  double getPerimeter() const { return 2 * (length + width); }

private:
  double length;
  double width;
};
