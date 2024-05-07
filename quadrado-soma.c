#include <stdio.h>

int main ()
{
    int n, i, quad, s = 0, total = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    quad = n * n;

    for (i = 1; total <= quad; i = i + 2)
    {
        printf("%d", i);
        s += i; 
        total = s + i;

        if (total <= quad)
        {
            printf(" + ");
        }
    }

    printf(" = %d", quad);

}