#include "itemType.h"

class UnsortedType {
public:
  UnsortedType(); // class constructor
  void ResetList();
  void PutItem(ItemType); // done
  bool IsFull() const;    // done
  int getLength() const;  // done
  void DeleteItem(ItemType);
  ItemType GetItem(ItemType, bool &) const; // bool -> ItemType for return type
  void PrintList() const;
  ItemType GetNextItem();

private:
  int length;
  ItemType info[MAX_ITEMS];
  int currentPos;
};
