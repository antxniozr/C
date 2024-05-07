#include <stdio.h>

int main (){
    int vetor1[10], vetor2[10];
    int i, j, k;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }    
    
    for (j = 0; j < 10; j++) {
        scanf("%d", &vetor2[j]);    
    }
    
    for (k = 0; k < 10; k++) {
        printf("%d|%d|", vetor1[k], vetor2[k]);    
    }
    
    printf("\n");
    
}
