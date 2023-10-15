#include <stdio.h>
#include <stdlib.h>
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
	printf("_________________________________________________________\n");
	len = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
	len2 = printf("This sentence is retrieved from va_args!\n");
	fflush(stdout);
	if (len != len2)
	{
		 printLengthDifferInRed();
		 printf("len1 = %d",len);
		 printf("should be %d", len2);
		fflush(stdout);
		return (1);
	}
	 else
                printSuccessInGreen();
        printf("_________________________________________________________\n");
    len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	len2 = printf("Complete the sentence: You know nothing, Jon Snow.\n");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	 else
                printSuccessInGreen();
        printf("_________________________________________________________\n");
    len = _printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	len2 = printf("Complete the sentence: You  nothing, Jon Snow.\n");
	fflush(stdout);
	if (len != len2)
	{
		printLengthDifferInRed();
		fflush(stdout);
		return (1);
	}
	 else
                printSuccessInGreen();
        printf("_________________________________________________________\n");
	return (0);
}
