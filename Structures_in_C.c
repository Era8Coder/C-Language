#include<stdio.h>

struct point{
    int x;  
    int y;
} p1, p2;       // Defining variables along with declaring the class point <=

void display(struct point pt){
    printf("(%d, %d)\n", pt.x, pt.y);       // We have to pass them directly in the sequence which we want the output 
}

int main(){
    p1.x = 5;
    p1.y = 7;
    display(p1);
    return 0;
}