#include <stdio.h>

int main(){
    int idade;
    float altura;
    char sexo;
    
    printf("Indique sua idade, altura e sexo: ");
    scanf("%d, %f, %c", &idade, &altura, &sexo);
    
    printf("Você tem %d anos, %.2f de altura e é do sexo %c", idade, altura, sexo);
    
    return 0;   
}
