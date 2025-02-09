// Specification file
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle {
public:
  Vehicle(const std::string &s, int w);
  virtual ~Vehicle();

  std::string getShape() const;
  int getNumWheels() const;
  virtual void displayInfo() const;

protected:
  std::string shape;
  int numWheels;
};

#endif
