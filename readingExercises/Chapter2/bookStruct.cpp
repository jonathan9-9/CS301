#include <iostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  int year;

  void displayedBookInformation() {
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "Year: " << year << "\n";
  }
};

int main() {
  Book firstBook = {"Alice in Wonderland", "Lewis Carroll", 1990};
  Book secondBook = {"The Da Vinci Code", "Dan Brown", 1987};

  std::cout << "Book Details 📘:\n";
  firstBook.displayedBookInformation();
  std::cout << "\n";
  secondBook.displayedBookInformation();

  return 0;
}
