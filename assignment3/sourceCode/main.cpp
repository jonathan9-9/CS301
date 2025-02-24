#include "unsortedType.h"
#include <fstream>
#include <iostream>

int main() {
  std::ifstream inputFile("input.txt");
  if (!inputFile) {
    std::cerr << "Error opening file. Try again" << std::endl;
    return 1;
  }

  UnsortedType list;
  int arraySize;
  std::string word;

  inputFile >> arraySize; // here we will read in the size of the array

  for (int i = 0; i < arraySize; i++) {
    inputFile >> word;
    ItemType newItem;
    newItem.Initialize(word);
    list.PutItem(newItem);
  }

  std::cout << "Stored List: ";
  list.PrintList();

  inputFile >> word;
  ItemType searchItem;
  searchItem.Initialize(word);
  bool found;
  list.GetItem(searchItem, found);

  if (found) {
    std::cout << "'" << word << "' was found in the list." << "\n";
  } else {
    std::cout << "'" << word << "' was not found in the list" << "\n";
  }

  return 0;
}
