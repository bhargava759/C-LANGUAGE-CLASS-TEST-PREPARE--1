#include <stdio.h>
struct student {
    int rollno;
    char name[50];
    float marks;
};
int main() {
    struct student s; 
    struct student *sptr; 
    sptr = &s; 
    printf("Enter roll number: ");
    scanf("%d", &sptr->rollno); 
    printf("Enter name: ");
    scanf("%s", sptr->name);
    printf("Enter marks: ");
    scanf("%f", &sptr->marks);
    printf("\nStudent Data:\n");
    printf("Roll No.: %d\n", sptr->rollno);
    printf("Name: %s\n", sptr->name);
    printf("Marks: %.2f\n", sptr->marks);
    return 0;
}
