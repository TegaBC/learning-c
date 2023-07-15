#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    int overall;
} Player;

// Print to console the players, with colours n border
void viewPlayers() {
    // Set max buffer size, buffer and file pointer 
    const int max = 64;
    FILE *file;
    char buffer[max];

    // Open file in read mode, set to the pointer
    file = fopen("save.txt", "r");

    // reads the file, stores it in the buffer. Returns pointer
    fgets(buffer, max, file);

    // Prints out the text
    printf(buffer);

   
    // read lines of the file
    // parse each line for the right info
    // print it to console looking nice
}

void editPlayer() {
    // Give options on editing players
}

void addNewPlayer(Player player) {
    // Go to new player form
}

int main() {

    // Ask user to enter a command (view, edit, add)

    char command[10];
    printf("Please enter a command!\n[VIEW, EDIT, ADD]\n--> ");
    fgets(command, 10, stdin);
    
    if (strcmp(command, "VIEW")) 
    {
        viewPlayers();
    } 
    else if (strcmp(command, "EDIT"))
    {

    }
    else if (strcmp(command, "ADD")) 
    {

    }
    else 
    {
        printf("Error, command [%s] could not be found.", command);
    }


    return 0;
}