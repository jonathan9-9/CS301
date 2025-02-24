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

  // compare two strings
  std::string word1, word2;
  inputFile >> word1 >> word2;
  ItemType item1, item2;
  item1.Initialize(word1);
  item2.Initialize(word2);
  RelationType result = item1.ComparedTo(item2);

  std::cout << "Result of Comparing Two Strings: '" << word1 << "' is ";
  if (result == LESS) {
    std::cout << "LESS than ";
  } else if (result == GREATER) {
    std::cout << "GREATER than ";
  } else {
    std::cout << "EQUAL to";
  }
  std::cout << "'" << word2 << "'" << "\n";

  // deleting a string
  inputFile >> word;
  ItemType deleteItem;
  deleteItem.Initialize(word);
  list.DeleteItem(deleteItem);

  // updated list
  std::cout << "Updated list after deleting '" << word << "': ";
  list.PrintList();

  inputFile.close();

  return 0;
}
