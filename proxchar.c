#include <stdio.h>

int main() {
     char A;
     printf("Digite um caractere: ");  
     scanf("%c", &A); 
     A = A + 1;
     printf("O próximo caractere na tabela ASCII é: %c", A);
     
     return 0;
}
