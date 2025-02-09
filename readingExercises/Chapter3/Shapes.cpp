#include <cmath>
#include <iostream>

class Shape {
public:
  virtual double getArea() const = 0; // Pure Virtual Functions
  virtual double getPerimeter() const = 0;
  virtual void displayInformation() const = 0;

  virtual ~Shape() {} // Destructor to Prevent Memory Leaks
};
class Circle : public Shape {
public:
  Circle(double r) : radius(r) {}

  double getArea() const override { return M_PI * radius * radius; }

  double getPerimeter() const override { return 2 * M_PI * radius; }

  void displayInformation() const override {
    std::cout << "Area of Circle: " << getArea()
              << "\nCircumference of Circle: " << getPerimeter() << "\n";
  }

private:
  double radius;
};
class Rectangle : public Shape {
public:
  Rectangle(double l, double w) : length(l), width(w) {}

  double getArea() const override { return length * width; }

  double getPerimeter() const override { return 2 * (length + width); }

  void displayInformation() const override {
    std::cout << "Area of Rectangle: " << getArea()
              << "\nPerimeter of Rectangle: " << getPerimeter() << "\n";
  }

private:
  double length;
  double width;
};
int main() {
  Circle circ(4);
  Rectangle rect(5, 7);

  circ.displayInformation();
  rect.displayInformation();

  return 0;
}
