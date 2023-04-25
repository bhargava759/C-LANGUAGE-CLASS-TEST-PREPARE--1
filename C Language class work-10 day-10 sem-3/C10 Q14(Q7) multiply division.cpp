#include <stdio.h>
typedef struct {
    float real;
    float imag;
} complex;
complex multiply(complex num1, complex num2) {
    complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}
complex divide(complex num1, complex num2) {
    complex result;
    float denominator = num2.real * num2.real + num2.imag * num2.imag;
    result.real = (num1.real * num2.real + num1.imag * num2.imag) / denominator;
    result.imag = (num1.imag * num2.real - num1.real * num2.imag) / denominator;
    return result;
}
int main() {
    complex num1, num2;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);
    complex product = multiply(num1, num2);
    complex quotient = divide(num1, num2);
    printf("The product of the two complex numbers is %.2f + %.2fi\n", product.real, product.imag);
    printf("The quotient of the two complex numbers is %.2f + %.2fi\n", quotient.real, quotient.imag);
    return 0;
}

