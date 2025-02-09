// Specification file
#include <string>

class Vehicle {
public:
  Vehicle(const std::string &c, int w);
  virtual ~Vehicle();

  std::string getColor() const;
  int getNumWheels() const;
  virtual void displayInfo() const;

protected:
  std::string color;
  int numWheels;
};
