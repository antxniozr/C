#include <stdio.h>

int main ()
{
    int i;

    for (i = 32; i <= 255; i++)
    {
        printf("%c, decimal = %d, hexadecimal = %x \n", i, i, i);
    }
}