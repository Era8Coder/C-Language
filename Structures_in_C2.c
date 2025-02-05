#include<stdio.h>

/*
    Here we are going to see that how to pass a struct using a pointer 
*/

struct point{
    int x;
    int y;
};

// Rectangle struct 
struct rect{
    struct point pt1;   // Bottom_left
    struct point pt2;   // Top_Right
};

// Function making a Struct Point 
struct point make_point(int x, int y){
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

// Function to add two points 
struct point add_points(struct point* p1, struct point* p2){
    p1->x += p2->x;
    p1->y += p2->y;
    return *p1;
}

// to check if the point lies inside the rectangle or not
int check_in_rect(struct point p, struct rect r){
    return (p.x >= r.pt1.x && p.y > r.pt1.y && p.x < r.pt1.x && p.y < r.pt2.y);     
}

// Higher precedence Case 
/*
    In C, the . (dot) and -> (arrow) operators have higher precedence than most other operators, 
    such as the * (dereference) or + (addition) operators. This means that these operators are 
    applied first when they appear in an expression.
*/

/*
                                                -->> MOST IMPORTANT PART <<--
    struct {
        int len;
        char *str;
    } *p;

    *p->str      // Accesses what str points to
    *p->str++    // Increments str after accessing what it points to
    (*p->str)++  // Increments what str points to
    *p++->str    // Increments p after accessing str
*/

void display(struct point *p){      // Passing as a pointer
    printf("(%d, %d)\n", p->x, p->y);
}

int main(){
    struct point p1 = {2,4};
    display(&p1);                   // Displaying the point 
    
    // Using the make_point function 
    struct point p2 = make_point(3,4);
    display(&p2); 
    
    add_points(&p1, &p2);
    display(&p1);

    struct rect r = {{0,0}, {10,10}};
    struct point p= {5,5};
    if(check_in_rect(p, r)){
        printf("Point lies inside the rectangle\n");
    }else{
        printf("Point lies outside the rectangle\n");
    }

    // Using pointers to structures
    struct point coordinates = {19, 19};
    struct point *ptr = &coordinates;
    printf("Coordinates: (%d %d)\n", (*ptr).x, (*ptr).y);       // dereferencing 
    printf("Coordinates: (%d %d)\n", ptr->x, ptr->y);
    return 0;
}