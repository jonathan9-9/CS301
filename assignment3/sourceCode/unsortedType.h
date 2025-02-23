#include "itemType.h"

class UnsortedType {
public:
  UnsortedType(); // class constructor
  void MakeEmpty();
  void PutItem(ItemType);
  bool IsFull() const;
  int getLength() const;

private:
  int length;
  ItemType info[MAX_ITEMS];
  int currentPos;
};
