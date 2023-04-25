#include <stdio.h>
int main() {
	int num1,num2,*ptr1,*ptr2;
	printf("enter first number");
	scanf("%d", &num1);
	printf("enter second number:");
	scanf("%d", &num2);
	ptr1=&num1;
	ptr2=&num2;
	if(*ptr1>*ptr2) {
		printf("maximum number is %d",*ptr1);
	}
	else {
		printf("maximum number is %d",*ptr2);
	}
	return 0;
}
