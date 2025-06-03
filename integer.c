//Q1 declear and print integer variable
#include<stdio.h>
int main(void)
{
    int num;         
    num = 25;      
    printf("The value of num is: %d\n", num);
    return 0;
}

//Q2 add two float numbers
#include<stdio.h>
int main(void)
{
    float num1 = 5.1, num2 = 10.8, sum;
    sum = num1 + num2;
    printf(" sum = %.2df\n", sum);
    return 0;
}


//Q3 find size of data type
#include<stdio.h>
int main(void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    return 0;
}

//Q4 swap two variables using a temporary variable
#include<stdio.h>
int main(void)
{
    int a = 6, b = 13, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}


//Q5 swap two variables without using a temporary variable
#include<stdio.h>
int main(void)
{
    int a = 7, b = 18;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}


//Q6 display ASCII value of a character
#include<stdio.h>
int main(void)
{
    char ch = 'A';
    printf("The ASCII value of %c is %d\n", ch, ch);
    return 0;
}


//Q7 calculate simple interest
#include<stdio.h>
int main(void)
{
    float principal = 1200.0, rate = 6, time = 3;
    float SI = (principal * rate * time) / 100;
    printf("The Simlpe Interest = %.2f\n", SI);
    return 0;
}


//Q8 multiply two integer
#include<stdio.h>
int main()
{
    int v = 16, u = 4, w;
    w = v*u;
    printf("The multiplication of %d and %d is %d\n",v,u,w);
    return 0;
}


//Q9 find the average of three number
#include<stdio.h>
int main()
{
    int d = 24, e = 34, c = 20;
    float f = (d + e + c)/3;
    printf("The average = %.2f\n", average);
    return 0;
}

//Q10 Demonstrate boolean-like behavior using integers
#include<stdio.h>
int main()
{
    int trueVal = 1, falseVal = 0;
    printf("True: %d, False: %d\n", trueVal, falseVal);
    printf("trueVal is %s\n", trueVal ? "TRUE" : "FALSE");
    printf("falseVal is %s\n", falseVal ? "TRUE" : "FALSE");
    return 0;
}