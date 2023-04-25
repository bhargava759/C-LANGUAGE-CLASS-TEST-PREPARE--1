#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
};
int main() {
    struct student s;
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks in subject 1: ");
    scanf("%f", &s.marks1);
    printf("Enter marks in subject 2: ");
    scanf("%f", &s.marks2);
    printf("Enter marks in subject 3: ");
    scanf("%f", &s.marks3);
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = (s.total / 300) * 100;
    printf("\nName: %s", s.name);
    printf("\nRoll number: %d", s.roll);
    printf("\nTotal marks: %.2f", s.total);
    printf("\nPercentage: %.2f%%", s.percentage);
    return 0;
}

