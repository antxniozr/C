#include <stdio.h>

int main ()
{
    int vetor[8], p[8], n[8], i, j, k, v = 0, w = 0;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (j = 0; j < 8; j++)
    {
        if(vetor[j] >= 0)
        {
            p[v] = vetor[j];
            v++;
        }
        else 
        {
            n[w] = vetor[j];
            w++;
        }
    }

    printf("Os valores positivos inseridos foram: |");
    for (k = 0; k < v; k++)
    {
        printf("%d|", p[k]);
    }

    printf("\n");

    printf("Os valores negativos inseridos foram: |");
    for (k = 0; k < w; k++)
    {
        printf("%d|", n[k]);
    }

    printf("\n");
}