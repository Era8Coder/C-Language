#include <stdio.h>
#include <stdlib.h>

/*
    The implementation of malloc and free described above is an unrestricted dynamic memory allocator, meaning:
        -> Calls to malloc and free can occur in any order.
        -> It manages non-contiguous memory blocks.
        -> It keeps a linked list of free blocks for efficient allocation.
        -> It follows a first-fit algorithm (picking the first sufficiently large block).

    Dynamic Memory Allocation:asm
        -> Using malloc(), calloc(), free(), realloc() <-> for efficient memory management 
                                                       <-> to change the size of the data structure like array during runtime
                                                       <-> They all come under <stdlib.h>  
*/

int main(){    
    /*
    dynamically allocate a single large block of memory with the specified size. 
    It returns a pointer of type void which can be cast into a pointer of any form. 
    It doesn’t Initialize memory at execution time so that it has initialized each 
    block with the default garbage value initially. 
    */
    int var = 32;
    int* ptr1 = &var;
    printf("%d\n", *ptr1);

    // Malloc <-> Memory Allocation
    int n = 4;
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));          // It will allocate memory = n integers
    /*
        if n = 100;
        -> Total 400 bytes memory if alloted 
        -> (int*) => Typecasting for the integer type memory
        -> Here the ptr variable stores the first byte of the alloted memory
    */

    if(ptr == NULL){
        printf("Memory can't ba Allocated\n");
        return 0;
    }
    
    /*
        syntax: free(ptr)

    */
    printf("Enter the input values:\n");
    for(int i=0; i<n; i++){
        scanf("%d", ptr + i);
    }

    printf("Input Values:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",*(ptr+i));            // dereferncing 
    }

    free(ptr);          // To free the memory 
    return 0;
}