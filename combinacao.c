#include <stdio.h>

int main() {
    int n, s, ns, fatn = 1, fats = 1, fatsn = 1, resultado;
    
    scanf("%d", &n);
    scanf("%d", &s);
    
    ns = n - s;
    
    while(n > 1) 
            fatn *= n--;
    
    while (s > 1)
            fats *= s--;     
    
    while(ns > 1)
            fatsn *= ns--;
    
    resultado = fatn / (fats * fatsn);
    
    printf("%d\n", resultado);
    
    return 0; 
}