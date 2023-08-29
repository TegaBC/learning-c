#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[16];
    char class[16];
    char grade[1];
    int age;
} student;

student AllStudents[64];
int totalStudents = 0;

void startStudentCreation() {
    // Allocate space for student info
    int sizeOfString = 16;

    char name[sizeOfString];
    char class[sizeOfString];
    char grade[sizeOfString];
    char age[sizeOfString]; // age is char not int just to make it easier

    // Prompt user and collect student information
    printf("-------------------\nEnter students first name:\n");
    fgets(name, sizeOfString, stdin);

    printf("Enter students class name:\n");
    fgets(class, sizeOfString, stdin);

    printf("Enter students current class grade:\n");
    fgets(grade, sizeOfString, stdin);

    printf("Enter students age:\n");
    fgets(age, sizeOfString, stdin);

    // Create a struct here
    student newStudent;

    // Set values of student
    newStudent.age = (int)age;
    strcpy(newStudent.name, name);
    strcpy(newStudent.class, class);
    strcpy(newStudent.grade, grade);

    totalStudents++;
    AllStudents[totalStudents-1] = newStudent;
}

int main() {

    while (1) 
    {
        // Set space for command to be stored
        int maxCharacters = 16;
        char command[maxCharacters];

        // Get user input
        printf("Choose command: [1] View Students, [2] Edit Students, [3] Add Student\n");
        fgets(command, maxCharacters, stdin);        

        // Remove newline character
        command[strcspn(command, "\n")] = 0; 

        // Clear the input buffer? TODO

        if (strcmp(command, "1") == 0) 
        {
            // View students
        } 
        else if (strcmp(command, "2") == 0) 
        {
            // Bring up menu to choose student to edit
        }
        else if (strcmp(command, "3") == 0) 
        {
            startStudentCreation();
        }
    }


    return 0;
}