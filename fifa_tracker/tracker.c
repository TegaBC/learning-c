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

    // Whilst we have strings to split, print the previous token (result of splitting the string)
    while(pPlayerToken != NULL) 
    {   
        // Store players in array, parse next string for next iteration of storage
        strcpy(players[playerCount], pPlayerToken); 
        pPlayerToken = strtok(NULL, ";"); // Note: Putting NULL instead of the string tells c to keep tokening first string passed

        // Increment player count for next value
        playerCount++; 
    }

    // Loops through players and prints stats to console
    for(int i = 0; i < playerCount; i++) {
        char player[64];
        strcpy(player, players[i]);

        // Split player stats up
        char firstName[16];
        char lastName[16];
        char overall[2]; 

        // Tokenize stats
        char *pPlayerStat = strtok(player, "_");

        while(pPlayerStat != NULL) 
        {   
            // Store players in array, parse next string for next iteration of storage
            printf("%s\n", pPlayerStat);
            pPlayerStat = strtok(NULL, "_"); 

            // TODO: store stats in variables and print nicely to console
        }
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