#include <stdio.h>

int main() {
    float notas[20];
    int i, j;
    float busca = 0.0;
    
    for (i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }
    
    
    while (1) {
          
          j = 0;
          
          scanf("%f", &busca);
          if (busca < 0.0) { 
             break;
          }   
          else{
             while ((notas[j] != busca) && (j < 20))
                   j++;
             
             if (j < 20) {
                printf("existe\n");
             }
             else {
                printf("nao existe\n");     
             }
          }
    }
}
