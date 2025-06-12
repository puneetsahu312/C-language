#include<stdio.h>
int main()
{
    //Q1. Fahrenheit to Celsius conversion:
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32)*5/9.0;
    printf("%.2f F is equal to %.2f C\n", fahrenheit, celsius);

    //Q2. Integer division with float result:
    int numerator = 5;
    int denominator = 2;
    float result;
    result = numerator / denominator;
    printf("Integer division: %d/%d = %.2f\n", numerator, denominator, result);
    result = (float)numerator / denominator;
    printf("Float division: %d/%d = %.2f\n", numerator, denominator, result);


    //Q3. Implicit vs Explicit casting:
    int x = 10;
    float y;
    y = x;
    printf("Implicit casting: int %d to float %d.2f\n", x, y);
    float a = 10.5;
    int b = (int)a;
    printf("Explicit casting: float %.2f to int %d\n", a, b);


    //Q4. Character to ASCII conversion:
    char ch;
    printf(" Enter a character:");
    scanf("%c", &ch);
    printf("ASCII value of '%c' is: %d\n", ch, ch);


    //Q5. Float salary to integer for report:
    float salary = 5000;
    int integerSalary = (int)salary;
    printf("Original salary: $%.2f\n", salary);
    printf("Salary for report (Integer): $%d\n", integerSalary);


    //Q6. Average marks as float:
    int marks[5];
    int sum = 0;
    float average;
    printf("Enter marks for 5 subject: \n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = (float)sum/5;
    printf("Average marks: %.2f\n", average);


    //Q7. Double to int coversion:
    double num;
    printf("Enter the double value \n");
    scanf("%1f", &num);
    printf("The convertion from double(%1f) to int is %d\n", num, (int)num);


//Q8. Weight conversion for pakaging:
float num1;
printf("enter the weight value:");
scanf("%f", &num1);
printf("The round offed value for weight(%f) is %d kg\n", num1, (int)num1);


//Q9. Mixed-Type billing calculation:
int rs;
float paisa;
printf("Enter the cost in rupee and than paisa\n");
scanf("%d %f", &rs, &paisa);
printf("The total money required is %.2f rupee", rs+(paisa/100));

//Q10. Compare result with and without casting:
int j = 5, l = 2;
int resultWeightCasting = j/l;
printf("result without casting (integer division): %d\n", resultWeightCasting);
float resultWithCasting = (float)j/l;
printf("result with casting (float division): %.2f\n", resultWithCasting);
    return 0;
}