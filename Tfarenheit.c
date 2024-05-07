#include <stdio.h>

int main () {
    float TempC, TempF;
    
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &TempC);
    TempF = TempC * 1.8 + 32;
    printf("Essa temperatura em Graus Farenheit é de: %.1f°", TempF);    
    
    return 0;
}
