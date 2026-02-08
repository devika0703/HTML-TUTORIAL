#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s;

    // Initializing structure members
    s.roll = 101;
    strcpy(s.name, "Devika");
    s.marks = 85.5;

    // Printing student details
    printf("Student Details:\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}