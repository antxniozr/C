#include <stdio.h>

int main()
{
    char ch;
    
    while ((ch = getchar()) != '#') {
        if (ch != '\n') {
            printf("O código ASCII é: %d\n", ch);
        }
    }

    return 0;
}
