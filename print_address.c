#include <stdio.h>

void print_address(unsigned long int number, int *count);

void myf(void *str)
{
        int c;
        unsigned long int st = (unsigned long int) str;
        print_lower_hexa(st, &c);

}

int main()
{
        int a;
        myf(&a);
        printf("\n");
        printf("%p", &a);
        return (0);
}
