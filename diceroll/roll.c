#include <stdio.h>
#include <time.h>
#include <string.h>

void rollDice() {

    // Seed the random number generator with time
    time_t t;
    srand((unsigned) time(&t));

    // Get a random number between 1 and 6
    int number = rand() % 7; 
    
    // How this works:
    // Get a random number and do a modulus calculation since it cant be a bigger remainder than the number given which sets the bound for random number
    
    printf("You got number: %d\nSymbol: ", number);

    switch (number)
    {
    case 1:
        printf("⚀\n");
        break;
    case 2:
        printf("⚁\n");
        break;
    case 3:
        printf("⚂\n");
        break;
    case 4:
        printf("⚃\n");
        break;
    case 5:
        printf("⚄\n");
        break;
    case 6:
        printf("⚅\n");
        break;
    default:
        break;
    }
}

int main() {
    int maxCommandCharacters = 2;
    
    while (1)
    {
        printf("Enter (Y) to roll a dice or (N) to close application:\n");
        
        // Read user input
        char command[maxCommandCharacters];
        fgets(command, maxCommandCharacters, stdin);

        // Remove newline character
        command[strcspn(command, "\n")] = 0; 

        // Clear the input buffer (any left over characters can interfere with the way fgets and stdin works)
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // In c you can set a variables value within a condition whilst evaluating it (because "=" operator returns value being assigned)

        if ((strcmp(command, "N") == 0)) 
        {
            printf("Closing application...\n");
            break; // Exit the loop
        }
        else if ((strcmp(command, "Y") == 0))
        {
            rollDice();
        }
        else
        {
            printf("Command %s not recognised\n", command);
        }
    }

    return 0;
}