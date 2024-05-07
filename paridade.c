#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, par, impar;
    par = 0;
    impar = 0;

    scanf("%d", &n1);
    if (n1 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n2);
    if (n2 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n3);
    if (n3 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n4);
    if (n4 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n5);
    if (n5 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n6);
    if (n6 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n7);
    if (n7 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n8);
    if (n8 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n9);
    if (n9 % 2 == 0)
        par++;
    else
        impar++;

    scanf("%d", &n10);
    if (n10 % 2 == 0)
        par++;
    else
        impar++;

    printf("%d pares, %d impares\n", par, impar);

    return 0;
}