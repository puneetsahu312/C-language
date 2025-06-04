//Q1 Write a C program to demonstrate arithmetic operators (+, -, *, /, %).
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 integer values\n"); 
    scanf("%d%d",&a,&b);
    printf("\n\naddition of %d and %d = %d\n",a,b,a+b);
    printf("subtraction of %d and %d = %d\n",a,b,a-b);
    printf("modulus of %d and %d = %d\n",a,b,a%b);
    printf("multipication of %d and %d = %d\n",a,b,a*b);
    printf("division of %d and %d = %d\n\n\n",a,b,a/b);
    return 0;
}


    //Q2 Write a C program to demonstrate relational operators (>, <, ==, !=, >=, <=).
    #include <stdio.h>
int main()
{
    printf("i am using the value of a and b, we entered before\nHere 0 = false and 1 =true\n");
    printf("%d > %d = %d\n",a,b,a>b);
    printf("%d < %d = %d\n",a,b,a<b);
    printf("%d >= %d = %d\n",a,b,a>=b);
    printf("%d <= %d = %d\n",a,b,a<=b);
    printf("%d == %d = %d\n",a,b,a==b);
    printf("%d != %d = %d\n\n\n",a,b,a!=b);
    return 0;
}


    //Q3 Write a C program to demonstrate logical operators (&&, ||, !).
    #include <stdio.h>
int main()
{
    int age;
    printf("tell your age\n");
    scanf("%d",&age);
    printf("you are able to drive a vehical '%d'\n",age>=18 &&
    age<70);
    printf("the result will be true if a>=b || b>=a = '%d'\nThis will alweys be true\n",a>=b || b>=a);
    printf("if 'a' was a non zero it will give zero = '%d'\n\n\n",!a);
    return 0;
}

    //Q5 Write a C program to demonstrate compound assignment operators (+=, -=, *=, /=, %=).
    #include <stdio.h>
int main()
{
    int c;
    printf("enter the value in which you want to perform compound assignment operation\n");
    scanf("%d",&c);
    printf("%d += 25 = %d\n",c,c+=25);
    printf("%d -= 25 = %d\n",c,c-=25);
    printf("%d *= 25 = %d\n",c,c*=25);
    printf("%d /= 25 = %d\n",c,c/=25);
    printf("%d '%'= 25 = %d\n\n\n",c,c%=25);
    return 0;
}
    //Write a C program to demonstrate increment and decrement operators (++ and --)
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Original value of a: %d\n", a);

    // Post-increment: value of a is assigned to b, then a is incremented
    b = a++;
    printf("After b = a++ -> b = %d, a = %d\n", b, a);

    // Pre-increment: a is incremented first, then assigned to b
    b = ++a;
    printf("After b = ++a -> b = %d, a = %d\n", b, a);

    // Post-decrement: value of a is assigned to b, then a is decremented
    b = a--;
    printf("After b = a-- -> b = %d, a = %d\n", b, a);

    // Pre-decrement: a is decremented first, then assigned to b
    b = --a;
    printf("After b = --a -> b = %d, a = %d\n", b, a);

    return 0;
}

//task7
//Write a C program to find the maximum of two numbers using the ternary operator
#include<stdio.h>
int main(){
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //how does ternary operator work?
    //syntax-> (condition) ? (if true then do this):(if false then do this)
    max = (a > b) ? a : b;
    //if a is greater than b then max will be a otherwise max will be b
    printf("The maximum number out of %d and %d is %d\n", a, b, max);

    return 0;
}

//task8
//Write a C program to display the size of various data types using the sizeof operator
#include<stdio.h>
int main(){
    printf("Size of int: %lu bytes\n", sizeof(int));      
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    //we use %lu (unsigned long int datatype) to display sizeof value because it matches return type of sizeof()
    return 0;
}