#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int c;
    while((c = getchar()) != EOF){
        putchar(c);             // -> Whatever you will input that will go as output <-
    }
    return 0;
}