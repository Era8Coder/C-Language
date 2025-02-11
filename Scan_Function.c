#include <stdio.h>

int main() {
    char input[] = "42 3.14 Hello";
    int num;
    float pi;
    char word[20];

    sscanf(input, "%d %f %s", &num, &pi, word);
    printf("Integer: %d, Float: %.2f, String: %s\n", num, pi, word);
    
    return 0;
}

/*
Specifier	   Input Type	                Description
%d           	int *	                Decimal integer
%i           	int *	                Integer (hex 0x, octal 0)
%u           	unsigned                 int *	Unsigned integer
%o           	int *	                Octal integer (base 8)
%x           	int *	                Hexadecimal integer (base 16)
%f           	float *,double *        	Floating-point number
%c           	char *	                Reads a single character
%s           	char *	                Reads a string (stops at whitespace)
%p           	void *	                Pointer address
%%           	None	                Reads a literal %
*/