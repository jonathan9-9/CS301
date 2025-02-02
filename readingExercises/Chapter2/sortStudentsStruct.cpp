#include <iostream>
#include <string>

// struct data type of Student
struct Student {
  std::string name;
  int age;
  double GPA;

  // display of student information
  void displayStudentGPA() {
    std::cout << "\n Name: " << name << " - " << "Age: " << age << " - "
              << "GPA: " << GPA << std::endl;
  }
};

// loop through the data and compare each value to swap if not in descending
// order
void sortStudentGPA(Student students[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (students[i].GPA < students[j].GPA) {
        std::swap(students[i], students[j]);
      }
    }
  }
}

int main() {
  const int numStudents = 2;
  Student students[numStudents];

  // loop through amount of student to prompt user for student information

  for (int i = 0; i < numStudents; i++) {

    std::cout << "Enter name for student " << i + 1 << ": ";

    std::getline(std::cin, students[i].name);

    std::cout << "Enter age for student " << i + 1 << ": ";
    std::cin >> students[i].age;

    std::cout << "Enter GPA for student " << i + 1 << ": ";
    std::cin >> students[i].GPA;

    std::cin.ignore();
  }

  // call to the function

  sortStudentGPA(students, numStudents);
  std::cout << "Student Details (sorted by GPA):\n";

  // display of the all the student info data ordered by GPA in descending order
  for (int i = 0; i < numStudents; i++) {
    students[i].displayStudentGPA();
  }

  return 0;
}
