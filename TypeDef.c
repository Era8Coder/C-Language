#include <stdio.h>
typedef int Length;         // We are using the Typedef sp that we can use them for shortening the code and making it small

int main(){
    Length len, maxlen;
    
    /*
    // Fixed Memory Allocation
    Length* lengths[10];                      // Creating an array of pointers to Length{which is int}
    */
    
    // -> Dynamic Memory Allocation <-
    int size = 10;  // Example size
    Length** lengths = (Length**)malloc(size * sizeof(Length*));  // Dynamically allocate array of pointers <-> this we will see after reading the "malloc"-> this is the toughest part

    if (lengths == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the array of pointers
    for (int i = 0; i < size; i++) {
        lengths[i] = (Length*)malloc(sizeof(Length));  // Allocate memory for each element
        *lengths[i] = i;  // Example usage
    }

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(lengths[i]);
    }
    free(lengths);

    return 0;
}