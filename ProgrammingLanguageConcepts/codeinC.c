#include<stdio.h>
#include <inttypes.h>
#include <stdlib.h>

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
            return 4;
        case 'b' : case 'B':
            return 3;
        case 'c' : case 'C':
            return 2;
        case 'd' : case 'D':
            return 1;
        case 'f' : case 'F':
            return 0;
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

    while (getchar() != "\n") continue;

    // type cast the pointer to LetterGrade to be more explicit
    LetterGrade *prevGrades = (LetterGrade*) malloc(numPrevCourses * sizeof(LetterGrade)); // total size in bytes

    for (int32_t courseIdx = 0; courseIdx < numPrevCourses; courseIdx++) {
        printf("Enter letter grade for course %i: ", courseIdx);
        char letterGrade;
        letterGrade = getchar();
    }
    return 0;
}
