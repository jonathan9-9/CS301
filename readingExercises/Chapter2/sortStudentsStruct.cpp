#include <iostream>
#include <string>

struct Student {
  std::string name;
  int age;
  double GPA;

  void displayStudentGPA() {
    std::cout << "\n Name: " << name << " - " << "Age: " << age << " - "
              << "GPA: " << GPA << std::endl;
  }
};

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

  for (int i = 0; i < numStudents; i++) {

    std::cout << "Enter name for student " << i + 1 << ": ";

    std::getline(std::cin, students[i].name);

    std::cout << "Enter age for student " << i + 1 << ": ";
    std::cin >> students[i].age;

    std::cout << "Enter GPA for student " << i + 1 << ": ";
    std::cin >> students[i].GPA;

    std::cin.ignore();
  }

  sortStudentGPA(students, numStudents);
  std::cout << "Student Details (sorted by GPA):\n";

  for (int i = 0; i < numStudents; i++) {
    students[i].displayStudentGPA();
  }

  return 0;
}
