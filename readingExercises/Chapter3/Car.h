#include "vehicleClass.h"

class Car : public Vehicle {
public:
  Car(const std::string &s);
  void displayInfo() const override;
};
