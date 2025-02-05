#include<stdio.h>
#include<math.h>

/*
    -> Important <-
    To compile the code along with math libray 
    gcc file_name.c -0 output_name -lm
    -> {-lm} is used to compile the math libray  
*/

struct point{
    int x;  
    int y;
} p1, p2;       // Defining variables along with declaring the class point <=

struct rect{        // has two variables x and y
    struct point pt1;
    struct point pt2;
};

void display(struct point pt){
    printf("(%d, %d)\n", pt.x, pt.y);       // We have to pass them directly in the sequence which we want the output 
}

float distance(struct point pt){        // From Origin
    float distance1 = sqrt(pt.x*pt.x + pt.y*pt.y);
    return distance1;
}

/*
int main(){
    p1.x = 5;
    p1.y = 7;
    display(p1);
    return 0;
}
*/

int main(){
    // Initialisation with the list of values 
    struct point maxpt = {30, 40};

    struct point pt;
    pt.x = 50;
    pt.y = 120;

    display(maxpt);
    display(pt);

    printf("%f\n", distance(maxpt));
    printf("%f\n", distance(pt));

    // Declaring a rectangle
    struct rect screen;
    
    // Accessing another struct's variables with the help of another one :)
    screen.pt1.x = 1;
    screen.pt1.y = 2;
    screen.pt2.x = 4;
    screen.pt2.y = 7;

    // Can use printf() to print the variables 
    return 0;
}