#include <stdio.h>
union Student {
    int rollno;
    float marks;
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    union Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &students[i].rollno);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\tMarks: %.2f\n", students[i].rollno, students[i].marks);
    }
    return 0;
}

