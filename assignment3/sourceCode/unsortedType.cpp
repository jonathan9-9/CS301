#include "unsortedType.h"

UnsortedType::UnsortedType() { length = 0; }

bool UnsortedType::IsFull() const { return length == MAX_ITEMS; }
