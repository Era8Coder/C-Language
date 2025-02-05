#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert a number to an Excel column name
void numberToExcelColumn(int n, char *result) {
    int index = 0;

    while (n > 0) {
        n--;  // Adjust for 1-based indexing
        result[index++] = (n % 26) + 'A';
        n /= 26;
    }

    result[index] = '\0';  // Null-terminate the string

    // Reverse the result to get the correct order
    int len = index;
    for (int i = 0; i < len / 2; i++) {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }
}

// Function to generate all Excel columns from 1 to C
char** generateExcelColumns(int C) {
    // Allocate memory for storing C strings
    char **columns = (char **)malloc(C * sizeof(char *));
    if (columns == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Generate each column name
    for (int i = 1; i <= C; i++) {
        columns[i - 1] = (char *)malloc(10 * sizeof(char));  // Max length is around 7 for "ZZZ"
        if (columns[i - 1] == NULL) {
            printf("Memory allocation failed!\n");
            return NULL;
        }
        numberToExcelColumn(i, columns[i - 1]);
    }
    return columns;
}

// Main function
int main() {
    int C;
    printf("Enter the number of columns: ");
    scanf("%d", &C);

    // Generate all column names
    char **columns = generateExcelColumns(C);
    
    if (columns != NULL) {
        printf("Excel Columns:\n");
        for (int i = 0; i < C; i++) {
            printf("%s ", columns[i]);
            free(columns[i]);  // Free allocated memory
        }
        printf("\n");
        free(columns);  // Free main array
    }

    return 0;
}
