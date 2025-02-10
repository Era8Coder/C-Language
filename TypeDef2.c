#include<stdio.h>
typedef char* string;
#define MAXLINES 100

int main(){
    /*
        -> Typedef for initialization of strings <-
    */
    string p, lineptr[MAXLINES], alloc(int);            // p is a string (pointer to char)
    int strcmp(string, string);         // Function that takes two strings as input
    p = (string) malloc(100);           // p is a string, hence a char* pointing to 100 bytes
    return 0;
}