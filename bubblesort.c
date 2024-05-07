#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j, k, l, temp;

    for(k = 0; k < 10; k++)
    {
        scanf("%d", &vetor[k]);
    }

    for (j = 9; j > 0; j--)
    { // j: limite da última posição
        for (i = 0; i < j; i++)
        {
            // Compara par a par:
            if (vetor[i] < vetor[i + 1])
            {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
            }
        }
    }

    for (l = 0; l < 10; l++)
    {
        printf("%d|", vetor[l]);
    }

    return 0;
}