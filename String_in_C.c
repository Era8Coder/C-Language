#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef char* string;

int main(){
    string str = "Anirudh123";
    for(int i=0; i<strlen(str); i++){
        // printf("%c ", str[i]);
        if(isalpha(str[i]) != 0){
            printf("Y");
        }else{
            printf("0");
        }
    }
    printf("\n");
    return 0;
}