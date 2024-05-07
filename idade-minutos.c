#include <stdio.h>

int main() {
    int idade, minutos;
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);
    
    minutos = idade * 365 * 24 * 60;
    printf("Sua idade em minutos e: %d", minutos);
    
    return 0; 
}
