#include "unsortedType.h"

UnsortedType::UnsortedType() { length = 0; }

bool UnsortedType::IsFull() const { return length == MAX_ITEMS; } // Observer

int UnsortedType::getLength() const { return length; } // Observer

void UnsortedType::PutItem(ItemType item) { // Mutator (transformer)
  if (length < MAX_ITEMS) {
    info[length] = item;
    length++;
  }
}

bool UnsortedType::GetItem(ItemType item, bool &found) const {
  found = false;
  for (int i = 0; i < length; i++) {
    if (info[i].ComparedTo(item) == EQUAL) {
      found = true;
      return found;
    } else {
      return found;
    }
  }
}
