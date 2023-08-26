#include <stdio.h>
#include <time.h>

int main() {
    
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
        printf("⚀");
        break;
    case 2:
        printf("⚁");
        break;
    case 3:
        printf("⚂");
        break;
    case 4:
        printf("⚃");
        break;
    case 5:
        printf("⚄");
        break;
    case 6:
        printf("⚅");
        break;
    default:
        break;
    }

    return 0;
}