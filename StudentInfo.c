#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10

struct student {
    char name[20];
    char speciality[10];
    float grad;
};

void printStudentInfo(struct student s) {
    printf("\nStudent: %s", s.name);
    printf("\nSpeciality: %s", s.speciality);
    printf("\nGrade: %.2f", s.grad);
    printf("\n-------------------------------------------");
}

int main() {
    struct student students[MAX_STUDENTS] = {
        {"Hibat Arrahman", "CSA", 20.0},
        {"Abd Arrahim", "CSA", 15.5},
        {"Belkis", "CSA", 13.75},
        {"Ahmed", "IT", 17.5},
        {"Sara", "IT", 18.25},
        {"Omar", "SE", 14.0},
        {"Mariam", "SE", 19.0},
        {"Khaled", "CS", 12.5},
        {"Laila", "CS", 16.75},
        {"Youssef", "AI", 20.0}
    };

    printf("Student Information:\n");
    printf("===========================================\n");

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printStudentInfo(students[i]);
    }

    return 0;
}

