#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

#define ANSI_COLOR_RED   "\x1b[31m"
#define ANSI_COLOR_GREEN  "\x1b[32m"
#define ANSI_COLOR_RESET  "\x1b[0m"
 
 void printSuccessInGreen() 
 {
     printf(ANSI_COLOR_GREEN "Success!" ANSI_COLOR_RESET "\n");
 } 
 
 void printLengthDifferInRed() 
 {
     printf(ANSI_COLOR_RED "Lengths differ here." ANSI_COLOR_RESET "\n");
 }
 
int main(void)
{
	int len, len2;
    /*long int l = INT_MAX;*/
    /*long int l2 = INT_MIN;*/
    printf("----------------------------------------------------------\n");
	len = _printf("%d\n", 1024);
	len2 = printf("%d\n", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	else 
		printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d\n", -1024);
	len2 = printf("%d\n", -1024);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d\n", 0);
	len2 = printf("%d\n", 0);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");

	/**
    	*l += 1024;
	*len = _printf("%d", l);
	*len2 = printf("%d", l);
	*fflush(stdout);
	*if (len != len2)
	*{
	* printf("Lengths differ.\n");
	* fflush(stdout);
	* return (1);
	*}
	*/
    	/**l2 -= 1024;
	*len = _printf("%d", l2);
	*len2 = printf("%d", l2);
	*fflush(stdout);
	*if (len != len2)
	*{
	*printf("Lengths differ.\n");
	*fflush(stdout);
	*return (1);
	*}
	*/
    len = _printf("There is %d bytes in %d KB\n", 1024, 1);
	len2 = printf("There is %d bytes in %d KB\n", 1024, 1);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	len2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", 1024);
	len2 = printf("%i\n", 1024);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", -1024);
	len2 = printf("%i\n", -1024);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", 0);
	len2 = printf("%i\n", 0);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", INT_MAX);
	len2 = printf("%i\n", INT_MAX);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", INT_MIN);
	len2 = printf("%i\n", INT_MIN);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");

    	/**l += 1024;
	*len = _printf("%i", l);
	*len2 = printf("%i", l);
	*fflush(stdout);
	*if (len != len2)
	*{
	*printf("Lengths differ.\n");
	*fflush(stdout);
	*return (1);
	*}
	*/
    	/*l2 -= 1024;
	*len = _printf("%i", l2);
	*len2 = printf("%i", l2);
	*fflush(stdout);
	*if (len != len2)
	*{
	*printf("Lengths differ.\n");
	*fflush(stdout);
	*return (1);
	*}
	*/
   len = _printf("There is %i bytes in %i KB\n", 1024, 1);
	len2 = printf("There is %i bytes in %i KB\n", 1024, 1);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
     printf("\n");
	len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
	 printf("\n");
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
     printf("\n");
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 printf("\n");
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d == %i\n", 1024, 1024);
    printf("\n");
	len2 = printf("%d == %i\n", 1024, 1024);
	 printf("\n");
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("iddi%diddiiddi\n", 1024);
    _printf("\n");
	len2 = printf("iddi%diddiiddi\n", 1024);
	printf("\n");
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%d\n", 10000);
	len2 = printf("%d\n", 10000);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
    len = _printf("%i\n", 10000);
	len2 = printf("%i\n", 10000);
	fflush(stdout);
	 if (len != len2)
        {
                printLengthDifferInRed();
                fflush(stdout);
                return (1);
        }
        else
                printSuccessInGreen();
    printf("----------------------------------------------------------\n");
	return (0);
}
