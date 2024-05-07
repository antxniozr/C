#include <stdio.h>

int main()
{
    float mes[12];
    int i, j, k, temp, maior, menor;

    for (i = 0; i < 12; i++)
    {
        scanf("%f", &mes[i]);
    }

    for (j = 11; j > 0; j--)
    {
        for ((i = 0) && (k = 1); i < j; i++)
        {
            while ((mes [i] > mes[k]) && (k < 12))
            {
                maior = i;
                if (mes[i] <= mes[k])
                {
                    maior = k;
                    i = k;
                }
                k++;
            }
        }
    }

    for (j = 11; j > 0; j--)
    {
        for ((i = 0) && (k = 1); i < j; i++)
        {
            while ((mes [i] < mes[k]) && (k < 12))
            {
                menor = i;
                if (mes[i] >= mes[k])
                {
                    menor = k;
                    i = k;
                }
                k++;
            }
        }
    }

    switch (maior)
    {
        case 0:
            printf("A maior temperatura média do ano ocorreu em Janeiro e foi de: %.1f°C\n", mes[0]);
            break;
        case 1:
            printf("A maior temperatura média do ano ocorreu em Fevereiro e foi de: %.1f°C\n", mes[1]);
            break;
        case 2:
            printf("A maior temperatura média do ano ocorreu em Marco e foi de: %.1f°C\n", mes[2]);
            break;
        case 3:
            printf("A maior temperatura média do ano ocorreu em Abril e foi de: %.1f°C\n", mes[3]);
            break;
        case 4:
            printf("A maior temperatura média do ano ocorreu em Maio e foi de: %.1f°C\n", mes[4]);
            break;
        case 5:
            printf("A maior temperatura média do ano ocorreu em Junho e foi de: %.1f°C\n", mes[5]);
            break;
        case 6:
            printf("A maior temperatura média do ano ocorreu em Julho e foi de: %.1f°C\n", mes[6]);
            break;
        case 7:
            printf("A maior temperatura média do ano ocorreu em Agosto e foi de: %.1f°C\n", mes[7]);
            break;
        case 8:
            printf("A maior temperatura média do ano ocorreu em Setembro e foi de: %.1f°C\n", mes[8]);
            break;
        case 9:
            printf("A maior temperatura média do ano ocorreu em Outubro e foi de: %.1f°C\n", mes[9]);
            break;
        case 10:
            printf("A maior temperatura média do ano ocorreu em Novembro e foi de: %.1f°C\n", mes[10]);
            break;
        case 11:
            printf("A maior temperatura média do ano ocorreu em Dezembro e foi de: %.1f°C\n", mes[11]);
            break;
    }

    switch (menor)
    {
        case 0:
            printf("A menor temperatura média do ano ocorreu em Janeiro e foi de: %.1f°C\n", mes[0]);
            break;
        case 1:
            printf("A menor temperatura média do ano ocorreu em Fevereiro e foi de: %.1f°C\n", mes[1]);
            break;
        case 2:
            printf("A menor temperatura média do ano ocorreu em Marco e foi de: %.1f°C\n", mes[2]);
            break;
        case 3:
            printf("A menor temperatura média do ano ocorreu em Abril e foi de: %.1f°C\n", mes[3]);
            break;
        case 4:
            printf("A menor temperatura média do ano ocorreu em Maio e foi de: %.1f°C\n", mes[4]);
            break;
        case 5:
            printf("A menor temperatura média do ano ocorreu em Junho e foi de: %.1f°C\n", mes[5]);
            break;
        case 6:
            printf("A menor temperatura média do ano ocorreu em Julho e foi de: %.1f°C\n", mes[6]);
            break;
        case 7:
            printf("A menor temperatura média do ano ocorreu em Agosto e foi de: %.1f°C\n", mes[7]);
            break;
        case 8:
            printf("A menor temperatura média do ano ocorreu em Setembro e foi de: %.1f°C\n", mes[8]);
            break;
        case 9:
            printf("A menor temperatura média do ano ocorreu em Outubro e foi de: %.1f°C\n", mes[9]);
            break;
        case 10:
            printf("A menor temperatura média do ano ocorreu em Novembro e foi de: %.1f°C\n", mes[10]);
            break;
        case 11:
            printf("A menor temperatura média do ano ocorreu em Dezembro e foi de: %.1f°C\n", mes[11]);
            break;
    }
}