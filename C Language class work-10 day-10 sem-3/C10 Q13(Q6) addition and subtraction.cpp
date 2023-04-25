#include <stdio.h>
#include <math.h>
typedef struct {
    float real;
    float imag;
} complex;
complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
complex sub(complex a, complex b) {
    complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
int main() {
    complex a, b, c, d;
    printf("Enter first complex number (a + bi): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second complex number (c + di): ");
    scanf("%f %f", &b.real, &b.imag);
	c = add(a, b);
    d = sub(a, b);
	printf("Sum = %.1f + %.1fi\n", c.real, c.imag);
    printf("Difference = %.1f + %.1fi\n", d.real, d.imag);
	  return 0;
}
