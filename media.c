#include <stdio.h>

int main() {
    float P1, P2, P3, media;
    
    printf("Insira sua nota da P1: ");
    scanf("%f", &P1);
    printf("Insira sua nota da P2: ");
    scanf("%f", &P2);
    printf("Insira sua nota da P3: ");
    scanf("%f", &P3);
    media = (P1 + P2 + P3) / 3;
    printf("Sua média final é: %.1f", media);
    
    return 0;    
}
