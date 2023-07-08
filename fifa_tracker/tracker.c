#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    int overall;
} Player;

// Players that are currently saved
Player currentPlayers[50];

void viewPlayers() {
    // Print to console the players, with colours n border
    
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
    
    if (command == "VIEW") 
    {
        viewPlayers();
    } 
    else if (command == "EDIT")
    {

    }
    else if (command == "ADD") 
    {

    }
    else 
    {
        printf("Error, command [%s]V could not be found.", command);
    }

    return 0;
}