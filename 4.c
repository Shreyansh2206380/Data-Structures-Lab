#include <stdio.h>
struct Complex
{
    float real;
    float imaginary;
};
struct Complex addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}
int main()
{
    struct Complex complex1, complex2, result;
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &complex1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &complex1.imaginary);
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &complex2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &complex2.imaginary);
    result = addComplex(complex1, complex2);
    printf("Sum of the complex numbers: %.2f + %.2fi\n", result.real, result.imaginary);
    return 0;
}
