#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30], nova[30];
    int i, j, k = 0;

    scanf("%s", palavra);

    for (i = strlen(palavra) - 1; i >= 0; i--) 
    {
        if ((palavra[i] >= 65) && (palavra[i] <= 90))
        {
            palavra[i] = palavra[i] + 32;
        }
    }

    for (j = strlen(palavra) - 1; j >= 0; j--) 
    {
        nova[k] = palavra[j];
        k++;
    }

    if(strcmp(palavra, nova) != 0)
    {
        printf("Esta palavra nao e um palindromo\n");
    }
    else
    {
        printf("Esta palavra e um palindromo\n");
    }
}