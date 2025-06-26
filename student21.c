//Modify the last program in section 7 to include the address of a student as a separate structure
#include <stdio.h>
#include <string.h>

// Define a structure for address
typedef struct {
    char street[30];
    char city[20];
    char state[20];
    int zipcode;
} Address;

// Define a structure for student
typedef struct {
    int rollNumber;
    char name[50];
    Address address;
} Student;

// Function to input student details
void inputStudent(Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNumber);
    getchar(); // Consume newline character
    printf("Enter name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = 0; // Remove newline character
    printf("Enter street address: ");
    fgets(s->address.street, sizeof(s->address.street), stdin);
    s->address.street[strcspn(s->address.street, "\n")] = 0; // Remove newline character
    printf("Enter city: ");
    fgets(s->address.city, sizeof(s->address.city), stdin);
    s->address.city[strcspn(s->address.city, "\n")] = 0; // Remove newline character
    printf("Enter state: ");
    fgets(s->address.state, sizeof(s->address.state), stdin);
    s->address.state[strcspn(s->address.state, "\n")] = 0; // Remove newline character
    printf("Enter zipcode: ");
    scanf("%d", &s->address.zipcode);
    getchar(); // Consume newline character
}

// Function to display student details
void displayStudent(Student s) {
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("Address: %s, %s, %s - %d\n", s.address.street, s.address.city, s.address.state, s.address.zipcode);
}

int main() {
    Student student;
    inputStudent(&student);
    displayStudent(student);
    return 0;
}