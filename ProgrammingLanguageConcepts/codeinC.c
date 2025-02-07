#include<stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    A = 4,
    B = 3,
    C = 2,
    D = 1,
    F = 0
} LetterGrade;

double getArrayAverage(int *arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (double) arr[i];
    }
    double avg = sum / size;
    return avg;
}

void convertCharToLetterGrade(char grade) {
    switch(grade) {
        case 'a' : case 'A':
            grade = 4;
            return;
        case 'b' : case 'B':
            grade = 3;
            return;
        case 'c' : case 'C':
            grade = 2;
            return;
        case 'd' : case 'D':
            grade = 1;
            return;
        case 'f' : case 'F':
            grade = 0;
            return;
        default:
            printf("Warning... Invalid Character... Recording an F.\n");
            return 0;
    }
}

 LetterGrade getLetterGradeFromAverage(const double avg) {
    if (avg >= 90) {
        return A;
    } else if (avg >= 80) {
        return B;
    } else if (avg >= 70) {
        return C;
    } else if (avg >= 60) {
        return D;
    } else {
        return F;
    }
}

int main() {

    char firstName[40];
    printf("Please enter your first name: ");
    scanf("%s", firstName);

    char lastName[40];
    printf("Please enter your last name: ");
    scanf("%s", lastName);

    // fixed integer width type same in C
    int32_t numPrevCourses;
    printf("Enter number of previous courses");
    scanf("%i", &numPrevCourses);

    while (getchar() != '\n') continue;

    // type cast the pointer to LetterGrade to be more explicit
    LetterGrade *prevGrades = (LetterGrade*) malloc(numPrevCourses * sizeof(LetterGrade)); // total size in bytes

    for (int32_t courseIdx = 0; courseIdx < numPrevCourses; courseIdx++) {
        printf("Enter letter grade for course %i: ", courseIdx);
        char letterGrade;
        letterGrade = getchar();
        while (getchar() != '\n') continue;
        convertCharToLetterGrade(&letterGrade);
        prevGrades[courseIdx] = (LetterGrade) letterGrade;
    }

    int32_t numExams;
    printf("Enter number of exams this semester: ");
    scanf("%i", &numExams);
    while (getchar() != '\n') continue;

    int32_t *examGrades = (int32_t*) malloc(numExams * sizeof(int32_t));

    for (int32_t examIdx = 0; examIdx < numExams; examIdx++) {
        printf("Enter grade for exam %i as an integer: ", examIdx);
        scanf(&examGrades[examIdx]);
        while (getchar() != '\n');
    }

    const char fullName[50];

    sprintf(fullName, "%s %s", firstName, lastName);

    printf("Grade Report For %s:\n", fullName);
    const double examAverage = getArrayAverage(examGrades, numExams);
    printf("Your exam average is: %lf\n", examAverage);

    LetterGrade newLetterGrade = getLetterGradeFromAverage(examAverage);
    prevGrades = (LetterGrade*) realloc(prevGrades, (numPrevCourses + 1) * sizeof(LetterGrade));
    prevGrades[numPrevCourses] = newLetterGrade;

    free(prevGrades);
    free(examGrades);

    const double gpa = getArrayAverage((int*) prevGrades, numPrevCourses + 1);
    printf("Your latest GPA is: %lf\n ", gpa);


    return 0;

}
