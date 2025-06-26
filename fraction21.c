// Write a C program that implement fraction (Lab)
#include <stdio.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction subtractFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction multiplyFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

Fraction divideFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    return result;
}

void printFraction(Fraction f) {
    printf("%d/%d\n", f.numerator, f.denominator);
}

int main() {
    Fraction f1 = {1, 2};
    Fraction f2 = {1, 3};

    Fraction sum = addFractions(f1, f2);
    Fraction difference = subtractFractions(f1, f2);
    Fraction product = multiplyFractions(f1, f2);
    Fraction quotient = divideFractions(f1, f2);

    printf("Fractions: ");
    printFraction(f1);
    printf("         + ");
    printFraction(f2);
    printf("Sum: ");
    printFraction(sum);
    printf("Difference: ");
    printFraction(difference);
    printf("Product: ");
    printFraction(product);
    printf("Quotient: ");
    printFraction(quotient);

    return 0;
}