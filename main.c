#include "main.h"

int main()
{
	_printf("%S", "No special character.");
	printf("\n-------------------------------------\n");
	_printf("%S", "\n");
	printf("\n-------------------------------------\n");
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	printf("\n-------------------------------------\n");
	_printf("%S", "Could you print some non-printable characters?\n%S\nThanks!\n","Sure:\x1F\x7F\n");
	printf("\n-------------------------------------\n");
	_printf("");
	printf("\n-------------------------------------\n");
	_printf("%S", "- What did you say?\n- %S\n- That's what I thought.\n", "");
	printf("\n-------------------------------------\n");
	return (0);
}

