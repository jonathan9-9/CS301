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

ItemType UnsortedType::GetNextItem() {
  currentPos++;
  return info[currentPos];
}

// bool UnsortedType::GetItem(ItemType item, bool &found) const {
//   found = false;
//   for (int i = 0; i < length; i++) {
//     if (info[i].ComparedTo(item) == EQUAL) {
//       found = true;
//       return found;
//     } else {
//       return found;
//     }
//   }
// }

ItemType UnsortedType::GetItem(ItemType item, bool &found) const {
  int location = 0;
  found = false;

  while (location < length && !found) {

    switch (item.ComparedTo(info[location])) {
    case EQUAL:
      found = true;
      return info[location];
    case GREATER:
    case LESS:
      found = false;
      location++;
      break;
    }
  }
  return ItemType();
}

void UnsortedType::DeleteItem(ItemType item) {
  for (int i = 0; i < length; i++) {
    if (info[i].ComparedTo(item) == EQUAL) {
      info[i] = info[length - 1];
      length--;
      return;
    }
  }
}
