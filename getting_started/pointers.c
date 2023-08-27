#include <stdio.h>

// Basic pointer learning

int main() 
{

    // * = indirection operator (value at address) - use when declaring a pointer and when accessing a value at the stored address of a pointer
    // & is used to return the address of a variable (Different to a pointer, use it to init a pointer though)

    // GOOD PRACTICE: Assign a pointer to NULL if you are not going to assign it straight away

    int age = 18;
    int *pAge = &age;
    
    printf("Address of age (address of variable stored location): %p\n", &age);
    printf("Value of pAge (address of variable its pointing to): %p\n", pAge);
    
    printf("Value at stored address (using the pointer which points to the original\nvariable address and getting the value at that address): %d\n", *pAge);

    //////


    // https://stackoverflow.com/questions/33404478/initialization-makes-pointer-from-integer-without-a-cast-c
    int *year = 2023;
    printf("\nThe current year is: %p\n", &year);

    return 0;
}
