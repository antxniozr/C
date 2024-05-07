#include <stdio.h>

int main ()
{
    float total = 0, media, nota[30];
    int i;

    for (i = 0; i < 30; i++)
    {
        scanf("%f", &nota[i]);
        total = total + nota[i];
    }

    media = total / 30;

    printf("A média foi de: %f\n", media);
    printf("Os alunos que foram acima da média foram:\n");

    for (i = 0; i < 30; i++)
    {
        if (nota [i] > media)
        {
            printf("%d\n", i);
        }
    }

}