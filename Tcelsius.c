#include <stdio.h>

int main () {
    float TempC, TempF;
    
    printf("Digite a temperatura em Graus Farenheit: ");
    scanf("%f", &TempF);
    TempC = (TempF - 32) / 1.8;
    printf("Essa temperatura em Graus Celsius é de: %.1f°", TempC);    
    
    return 0;
}
