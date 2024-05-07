#include <stdio.h>

int main()
{
    int n;
    
    for (n = 1; n < 10000; n++)
    {
        if ((n % 3 == 2) && (n % 5 == 3) && (n % 7 == 4))
        {
            printf("O valor de n que atende os requisitos é: %d", n);
            break;
        }
    }
}