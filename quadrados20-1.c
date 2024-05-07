#include <stdio.h>

int main()
{
    int num[20], i, n = 1;

    for (i = 0; i < 20; i++)
    {
        num[i] = n * n;
        n++;
    }

    for (i = 19; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }
}