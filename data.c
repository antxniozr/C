#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite sua data de Nascimento:");  
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    switch (mes) {
           case 1 || 01:
                printf("%d de Janeiro de %d", dia, ano);
                break;
           case 2 || 02:
                printf("%d de Fevereiro de %d", dia, ano);
                break;
           case 3 || 03:
                printf("%d de Março de %d", dia, ano);
                break;
           case 4 || 04:
                printf("%d de Abril de %d", dia, ano);
                break;
           case 5 || 05:
                printf("%d de Maio de %d", dia, ano);
                break;
           case 6 || 06:
                printf("%d de Junho de %d", dia, ano);
                break;
           case 7 || 07:
                printf("%d de Julho de %d", dia, ano);
                break;
           case 8 || 08:
                printf("%d de Agosto de %d", dia, ano);
                break;
           case 9 || 09:
                printf("%d de Setembro de %d", dia, ano);
                break;
           case 10:
                printf("%d de Outubro de %d", dia, ano);
                break;
           case 11:
                printf("%d de Novembro de %d", dia, ano);
                break;
           case 12:
                printf("%d de Dezembro de %d", dia, ano);
                break;
    }  
}
