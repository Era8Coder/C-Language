#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int c;
    int is_upper_to_lower = 0;

    // Ensure that argv[1] exists before accessing it
    if (argc > 1 && strstr(argv[1], "upper") != NULL) {         // Since upper -> therefore it will convert to the lower case and if the lower then it will convert to the upper case !
        is_upper_to_lower = 1;  // Convert from upper to lower
    }

    while ((c = getchar()) != EOF) {
        if (is_upper_to_lower) {
            putchar(tolower(c));  // Convert uppercase to lowercase
        } else {
            putchar(toupper(c));  // Convert lowercase to uppercase
        }
    }
    return 0;
}
