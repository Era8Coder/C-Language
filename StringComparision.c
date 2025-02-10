#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("%d\n", strcmp("Anirudh","Hello"));          // Since it's lexicographically smaller therefore negative 
    printf("%d\n", strcmp("Hello","Anirudh"));          // Since it's lexicographically greater therefore positive
    printf("%d\n", strcmp("ABCDEF","ABCDEF"));          // Since it's lexicographically equal to another string therefore 0
    return 0;
}