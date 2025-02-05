#include<stdio.h>

/*
    Here we are going to learn about strings in C
*/

int main(){
    // using character arrays
    char str1[] = "Hello";  // Stored as an array
    printf("%s\n", str1);
    
    //  Using pointer
    char *str2 = "Hello";  // Pointer to a string literal
    printf("%s\n", str2);
    
    // Pointer Arithemetic
    char str3[] = "Hello";
    char *ptr = str3; // Pointer to the first character

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++; // Move to the next character
    } 
    printf("\n");

    char *ptr1 = str3;
    ptr1[0] = 'M';
    printf("%s\n", ptr1);
    
    char *words[] = {"Apple", "Banana", "Cherry"}; // Array of pointers to strings
    char **ptr2 = words; // Pointer to the first string

    for (int i = 0; i < 3; i++) {
        printf("%s\n", ptr2[i]);  // Print each word
    }
    return 0;
}