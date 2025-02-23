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
