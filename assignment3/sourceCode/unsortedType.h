#include "itemType.h"

class UnsortedType {
public:
  UnsortedType(); // class constructor
  void MakeEmpty();
  bool IsFull() const;

private:
  int length;
  ItemType info[MAX_ITEMS];
  int currentPos;
};
