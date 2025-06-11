#include<stdio.h>
#include<ctype.h>
#include<unistd.h>

int main()
{
 // Q1. home light switch.
    int light = 0;
    printf("the light which are on are = %d\n",light);
    printf("now turning light 7 and 3 on and toggeling light 5\n");
    light = light | 1<<3;
    light = light | 1<<7;
    light = light^(1<<5);    

    int display = 1<<8;
    for(int c =1;c<=8;c++){
        putchar(light & display ? '1':'0');
        light <<= 1;
    }
    printf("\n");



    //Q2. digital clock multiplication.
    int second;
    printf("\n\nenter the number in which you want to multiply\n");
    scanf("%d",&second);
    //multiply by 2
    printf("the value you entered is %d\n",second);
    printf("%d multiplied by 2 = %d\n",second, second<<1);
    //multiply by 4
    printf("%d multiplied by 4 = %d\n",second, second<<2);
    //multiply by 8
    printf("%d multiplied by 8 = %d\n",second, second<<3);
    //divide by 2
    printf("%d divide by 2 = %d\n",second, second>>1);
    //divide by 4
    printf("%d divide by 4 = %d\n",second, second>>2);
    //divide by 8
    printf("%d divide by 8 = %d\n",second, second>>3);



    //Q3. pedestrian crossing.
    char color;
    printf("\n\nenter the trafic signal color 'r' 'g' 'y'\n");
    scanf("%s",&color);
    color = tolower(color);
    if(color == 'g'){
    printf("you can go now");
    }
    else if (color == 'y')
    {
        printf("you can go but slow, ok!");
    }
    else if (color == 'r')
    {
        printf("you have to stop");
    }
    else{
        printf("invalid input");
    }
    


    //Q4. room AC Control.
    int temp;
    printf("\n\n\nenter the temperature of the room\n");
    scanf("%d",&temp);
    if(temp >=30 ){
        printf("Turn AC On");
    }
    else if(temp<30){
        printf("no need of ac for you, go and sit under a fan");
    }
    else{
        printf("enter the tempareture not some random word");
    }



    //Q5. bus fare discount system.
    int age;
    int gender;
    printf("\n\n\nenter you age\n");
    scanf("%d",&age);
    printf("enter you Gender if 'male' enter '1' if 'female' enter '0'\n");
    scanf("%d",&gender);

    if(age<12){
        printf("50percent discount");
    }
    else if (age >= 60)
    {
        if (gender == 1)
        {
            printf("30 percent discount");
        }
        else if (gender == 0)
        {
            printf("40 percent discount");
        }
        else{
            printf("not a valid gender");
        }
    }
    else{
        printf("no discount");
    }
    



    //Q6. monthly electricity calculator.
    int daily_usage,use = 0,average_usage = 0,total_usage = 0;
    printf("\n\n\nenter your daily usage of electricity in watts\n");
    for (int i = 1; i <= 30; i++)
    {
        printf("daily usage of day %d\n",i);
        scanf("%d",&daily_usage);
        use += daily_usage;
    }
    printf("tatal usage = %d\n",use);
    printf("average usage =%d\n",use/30);



    //Q7. ATM PIN Entry.
    int password = 2244,pass;
    int max_try = 3;
    int current_try = 1;
    printf("\n\n\nprint this pin entry exersice and pin should be 4 digit\n");
    for (int j = 0 ; j < 1; j++)
    {
        while (current_try <=max_try)
        {
            printf("\nthis is try no. %d\n",current_try);
            printf("enter your password\n");
            scanf("%d",&pass);
            if (pass == password)
            {
                printf("access granted");
                break;
            }
            else if (pass<1000 || pass >9999)
            {
                printf("password should be 4 digit");
            }
            else if (current_try == max_try)
            {
                printf("you have used all your tries and non of them match\nYour card is now blocked");
            }
            else{
                printf("wrong password");
            }
            current_try++; 
        }
    }
    //Q8. Washig mashine timer.
    int sec;
    printf("\n\n\\nenter the amount of time you want to run the mashine (second)\n");
    scanf("%d",&sec);
    do{
        printf("%d second remaining\n",sec);
        sec--;
        sleep(1);
    }while(sec>=0);
    printf("washing complete");
}