#include<stdio.h>
#include <inttypes.h>

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


int main() {



    return 0;
}
