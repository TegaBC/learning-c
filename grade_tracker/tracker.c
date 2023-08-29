#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[16];
    char class[16];
    char grade[16];
    char age[16];
} student;

const char divider[] = "<<------------------------------>>";
const char smallDivider[] = "<-------------------->";

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
    printf("%s\nEnter students first name:\n", divider);
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
    strcpy(newStudent.age, age);
    strcpy(newStudent.name, name);
    strcpy(newStudent.class, class);
    strcpy(newStudent.grade, grade);

    totalStudents++;
    AllStudents[totalStudents-1] = newStudent;
}

void viewStudents() {
    if (totalStudents <= 0) {
        printf("No students to view.\n");
        return;
    }

    printf("%s\n", divider);

    // Loop through student array and print nicely to console
    for (int n = 0; n <= totalStudents-1; n++) 
    {
        // Get the student we are currently on
        student currentStudent = AllStudents[n];
        
        // Display info to user
        printf("%d.\nStudent Name: %sClass: %sGrade: %sAge: %s%s\n", 
        n+1, currentStudent.name, currentStudent.class, currentStudent.grade, currentStudent.age, smallDivider);
    }
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
            viewStudents();
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