#include <stdio.h>

int main(int argc, char* argv[]) {
    int num = 42;
    double pi = 3.14159265;
    char str[] = "Hello, World";

    printf("Integer: %d\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);
    printf("Floating point: %.2f\n", pi);
    printf("Scientific notation: %e\n", pi);
    printf("String: %.5s\n", str); // Print only first 5 characters

    printf("<<-->>\n");

    char buffer[50];
    num = 100;
    sprintf(buffer, "The value is %d", num);        // sprintf stores the output in a string
    printf("%s\n", buffer);             // Print the formatted string

    return 0;
}

/*

Specifier	Argument Type	            Output Format
%d,%i	        int	                Signed decimal integer
%o 	            int	                Unsigned octal (base 8)
%x,%X	        int	            Unsigned hexadecimal (base 16)
%u 	            int	                Unsigned decimal integer
%c 	            char	                Single character
%s 	            char *	            String of characters
%f 	            double	              Floating point number
%e,%E	        double	             Scientific notation
%g,%G	        double	              Shorter of %f or %e
%p 	            void *	              Pointer address
%% 	            None	                 Prints %

*/
