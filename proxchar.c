#include <stdio.h>

int main() {
     char A;
     printf("Digite um caractere: ");  
     scanf("%c", &A); 
     A = A + 1;
     printf("O pr�ximo caractere na tabela ASCII �: %c", A);
     
     return 0;
}
