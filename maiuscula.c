#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite uma letra: ");
    letra = getchar();
    
    if (letra >= 'a' && letra <= 'z') {
         letra = letra - 32;
         printf("%c", letra);
    }
    else {
         printf("%c", letra);          
    }
    
    return 0;
}
