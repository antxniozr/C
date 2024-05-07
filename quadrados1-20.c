#include <stdio.h>

int main ()
{
    int i, quad;

    for (i = 1; i <= 20; i++)
    {
        quad = i * i; 
        printf("%d", quad);
    }

    return 0;
}