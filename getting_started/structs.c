#include <stdint.h>
#include <string.h>

struct Player {
    int age;
    int overall;
    int startingYear;
    char name[15];
};

int main() {

    struct Player danielSturridge;
    
    danielSturridge.age = 33;
    danielSturridge.overall = 78;
    danielSturridge.startingYear = 2015;
    strcpy(danielSturridge.name, "Daniel S."); // to modify strings I have to use str copy, if in the struct I don't allocate memory to the string I get a warning when assigning now.


    return 0;
}