#include <fstream>

const int MAX_ITEMS = 20;
enum RelationType { LESS, GREATER, EQUAL };

class ItemType {
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream &) const;
  void Initialize(std::string stringValue);

private:
  std::string value;
};
