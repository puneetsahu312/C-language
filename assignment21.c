#include<stdio.h>
//Write a C program that implement complex number 
typedef struct 
{
    double real;
    double imag;
}Complex;
Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
     result.real = c1.real + c2.real;
     result.imag = c1.imag + c2.imag;
     return result;
}
Complex subtractComplex(Complex c1, Complex c2)
{
    Complex result;
     result.real = c1.real - c2.real;
     result.imag = c1.imag - c2.imag;
     return result;
}
Complex multiplyComplex(Complex c1, Complex c2)
{
     Complex result;
     result.real = c1.real * c2.real - c1.imag * c2.imag;
     result.imag = c1.imag * c2.imag + c1.imag * c2.real;
     return result;
}
void printComplex(Complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
int main()
{
    Complex c1 = {3.0, 4.0};
    Complex c2 = {1.0, 2.0};
    Complex sum = addComplex(c1, c2);
    Complex difference = subtractComplex(c1, c2);
    Complex product = multiplyComplex(c1, c2);

    printf("Complex numbers: ");
    printComplex(c1);
    printf("     +");
    printComplex(c2);
    printf("Sum: ");
    printComplex(sum);
    printf("Difference: ");
    printComplex(difference);
    printf("Product: ");
    printComplex(product);
    return 0;
}




