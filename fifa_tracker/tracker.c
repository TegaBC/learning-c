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
    const int max = 128;
    FILE *pFile;
    char buffer[max];

    // Open file in read mode, set to the pointer
    pFile = fopen("save.txt", "r");

    // reads the file, stores it in the buffer. Returns pointer
    fgets(buffer, max, pFile);

    // place to store players parsed from the file, set counter (index) for players
    char players[32][64];
    int playerCount = 0;

    // Extract first player 
    char *pPlayerToken = strtok(buffer, ";");

    while(pPlayerToken != NULL) { // Whilst we have strings to split, print the previous token (result of splitting the string)
        strcpy(players[playerCount], pPlayerToken); // Stores player information inside the players array
        pPlayerToken = strtok(NULL, ";"); // Parses the remaining string

        playerCount++; // Increment player count for next value
    }
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