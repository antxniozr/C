#include <stdio.h>

int main (){
    int quant[10];
    float valor[10], lucroProd[10], lucroTotal = 0;   
    int i, j, t, quantTotal;
    
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &quant[i]);
    }
    
    for (j = 0; j < 10; j++) {
        scanf("%f", &valor[j]);    
    }
    
    for (t = 0; t < 10; t++) {
        quantTotal = quantTotal + quant[t];
        lucroProd[t] = quant[t] * valor[t];
        lucroTotal = lucroTotal + lucroProd[t];
    }   
    
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucroTotal, quantTotal);
}
