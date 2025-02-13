#include<stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

 enum LetterGrade {
    A = 4,
    B = 3,
    C = 2,
    D = 1,
    F = 0
};

double getArrayAverage(int *arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (double) arr[i];
    }
    return sum > 0 ? sum / size : 0;
}

void convertCharToLetterGrade(char *grade) {
    switch(*grade) {
        case 'a' : case 'A':
            *grade = 4;
            return;
        case 'b' : case 'B':
            *grade = 3;
            return;
        case 'c' : case 'C':
            *grade = 2;
            return;
        case 'd' : case 'D':
            *grade = 1;
            return;
        case 'f' : case 'F':
            *grade = 0;
            return;
        default:
            printf("Warning... Invalid Character... Recording an F.\n");
    }
}

 enum LetterGrade getLetterGradeFromAverage(const double avg) {
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
    printf("Enter number of previous courses: ");
    scanf("%i", &numPrevCourses);

    while (getchar() != '\n') continue;

    // type cast the pointer to LetterGrade to be more explicit
    enum LetterGrade *prevGrades = (enum LetterGrade*) malloc(numPrevCourses * sizeof(enum LetterGrade)); // total size in bytes

    for (int32_t courseIdx = 0; courseIdx < numPrevCourses; courseIdx++) {
        printf("Enter letter grade for course %i: ", courseIdx + 1);
        char letterGrade;
        scanf(" %c", &letterGrade);
        while (getchar() != '\n') continue;
        convertCharToLetterGrade(&letterGrade);
        prevGrades[courseIdx] = (enum LetterGrade) letterGrade;
    }

    int32_t numExams;
    printf("Enter number of exams this semester: ");
    scanf("%i", &numExams);
    while (getchar() != '\n') continue;

    int32_t *examGrades = (int32_t*) malloc(numExams * sizeof(int32_t));

    for (int32_t examIdx = 0; examIdx < numExams; examIdx++) {
        printf("Enter grade for exam %i as an integer: ", examIdx + 1);
        scanf("%i", &examGrades[examIdx]);
        while (getchar() != '\n');
    }

    char fullName[100];

    sprintf(fullName, "%s %s", firstName, lastName);

    printf("Grade Report For %s:\n", fullName);
    const double examAverage = getArrayAverage(examGrades, numExams);
    printf("Your exam average is: %.2f\n", examAverage);

    enum LetterGrade newLetterGrade = getLetterGradeFromAverage(examAverage);
    prevGrades = (enum LetterGrade*) realloc(prevGrades, (numPrevCourses + 1) * sizeof(enum LetterGrade));
    prevGrades[numPrevCourses] = newLetterGrade;



    const double gpa = getArrayAverage((int*)prevGrades, numPrevCourses);
    printf("Your latest GPA is: %.2f\n ", gpa);

    free(prevGrades);
    free(examGrades);

    return 0;

}
