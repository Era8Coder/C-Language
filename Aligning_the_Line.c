#include <stdio.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 50  // Maximum characters per line

int main() {
    int c;
    int char_count = 0;         // Tracking the line length with the help of char_count 

    while ((c = getchar()) != EOF) {        // getchar() reads input one character at a time
        if (isprint(c)) {
            /*
                isprint(c) checks if a character is printable.
                If yes, print it as is.
                If no, print it in octal format (\ooo)
            */
            putchar(c);  // Print normal characters directly
        } else {
            // Print non-printable characters in octal format
            printf("\\%03o", c);
        }
        
        char_count++;

        // If line length exceeds the limit, break the line
        if (char_count >= MAX_LINE_LENGTH) {
            printf("\n");
            char_count = 0; // Reset count
        }
    }

    return 0;
}
