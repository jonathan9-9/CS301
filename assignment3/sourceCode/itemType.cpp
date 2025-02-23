#include "itemType.h"

ItemType::ItemType() { value = ""; }

RelationType ItemType::ComparedTo(ItemType otherItem) const {
  if (value < otherItem.value) {
    return LESS;
  } else if (value > otherItem.value) {
    return GREATER;
  } else {
    return EQUAL;
  }
}

void ItemType::Print(std::ostream &out) const { out << value; }

void ItemType::Initialize(std::string stringValue) { value = stringValue; }

std::string ItemType::GetValue() const { return value; }
