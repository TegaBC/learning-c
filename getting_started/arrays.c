#include <stdio.h>

int main() {
    int availableKitNumbers[] = {10, 30, 15, 15};

    // Since the available kit numbers array stores the same type across the board, the same amount of bytes are allocated 
    // so we can simple divide the size of the array by the size of one of the elements to get how many ACTUAL elements are in the array
    
    printf("We have %d kit numbers left.", sizeof(availableKitNumbers) / sizeof(availableKitNumbers[0])); 
    return 1;
}