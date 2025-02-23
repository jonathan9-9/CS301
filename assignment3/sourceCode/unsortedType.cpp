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
