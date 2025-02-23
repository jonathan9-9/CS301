#include <fstream>
#include <iostream>
#include <string>

const int MAX_ITEMS = 20;
enum RelationType { LESS, GREATER, EQUAL };

class ItemType {
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream &) const;
  void Initialize(std::string stringValue);
  std::string GetValue() const;

private:
  std::string value;
};
