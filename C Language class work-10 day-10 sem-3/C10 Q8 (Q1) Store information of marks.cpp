#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};
int main() {
    int n, i;
	printf("Enter the number of students: ");
    scanf("%d", &n);
	struct Student students[n];
	for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
	printf("\n\nStudent Information:\n");
	for(i = 0; i < n; i++) 
        printf("\nStudent %d\n", i+1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
		return 0;
}
