#include <stdio.h> 
 
struct student  
{ 
            int id; 
            char name[20]; 
            char grade; 
}; 
 
void func(struct student stud); 
 
int main()  
{ 
            struct student astud; 
 
            astud.id=9401; 
            strcpy(astud.name, "Joe"); 
            astud.grade = 'A'; 
 
            func(astud); 
            return 0; 
} 
void func(struct student astud) 
{ 
printf(" Id is: %d \n", astud.id); 
printf(" Name is: %s \n", astud.name); 
printf(" Grade is: %c \n", astud.grade); 
}