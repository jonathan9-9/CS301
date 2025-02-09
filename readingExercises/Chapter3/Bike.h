#include "vehicleClass.h"

class Bike : public Vehicle {
public:
  Bike(const std::string &s);
  void displayInfo() const override;
};
