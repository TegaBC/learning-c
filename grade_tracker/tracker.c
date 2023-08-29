#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[16];
    char class[16];
    char grade[1];
    int age;
};

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct student AllStudents[64];

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

        // Clear the input buffer
        clearInputBuffer();

        if (strcmp(command, "1") == 0) 
        {
            // View students
        } 
        else if (strcmp(command, "2")) 
        {
            // Bring up menu to choose student to edit
        }
        else if (strcmp(command, "3")) 
        {
            // Ask questions to add a student
        }
    }


    return 0;
}