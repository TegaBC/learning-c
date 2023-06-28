#include <stdio.h>

// Function that uses CASTING
// Casts a float or double (idek which one tbf) to a int
int main() {
    int age = 18;
    char occupation[] = "Game developer";
    int projectsBuilt = 5;

    printf("Projected projects built for the next month: %d", (int)(projectsBuilt * 1.35));

    return 0;
}