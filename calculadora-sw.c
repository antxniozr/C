#include <stdio.h>

int main ()
{
    float n1, n2, result;
    char op;

    printf("CALCULADORA SIMPLES\n");
    printf("-------------------\n");
    scanf("%f %c %f", &n1, &op, &n2); 
    
    switch (op)
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
    } 

    printf("%.3f %c %.3f = %.3f", n1, op, n2, result);
}