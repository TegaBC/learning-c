#include <stdio.h>
#include <time.h>
#include <string.h>

#define ANSI_COLOR_BLUE "\x1b[34m" // Works directly with string literals because performs direct textual substitution
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

void rollDice() {

    // Seed the random number generator with time
    time_t t;
    srand((unsigned) time(&t));

    // Get a random number between 1 and 6
    int number = rand() % 7; 
    
    // How this works:
    // Get a random number and do a modulus calculation since it cant be a bigger remainder than the number given which sets the bound for random number
    
    printf("%sYou got number: %d %s\nSymbol: ", ANSI_COLOR_CYAN, number, ANSI_COLOR_RESET); // Using colours in a different way, this way can be used with normal strings too instead of #define

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
        printf(ANSI_COLOR_BLUE "Enter (Y) to roll a dice or (N) to close application:\n" ANSI_COLOR_RESET);
        
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