#include "itemType.h"

class UnsortedType {
public:
  UnsortedType(); // class constructor
  void MakeEmpty();
  void PutItem(ItemType); // done
  bool IsFull() const;    // done
  int getLength() const;  // done
  void DeleteItem(ItemType);
  bool GetItem(ItemType, bool &) const;
  void PrintList() const;

private:
  int length;
  ItemType info[MAX_ITEMS];
  // int currentPos;
};
