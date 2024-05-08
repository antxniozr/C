#include <stdio.h>
#include <math.h>

void soma(float X, float Y);
void sub(float X, float Y);
void prod(float X, float Y);
void div(float X, float Y);
void pot(float X, float Y);

int main()
{
    float N1, N2;
    char OP;

    scanf("%f%c%f", &N1, &OP, &N2);

    if(OP == '+')
    {
        soma(N1, N2);
    }
    else if(OP == '-')
    {
        sub(N1, N2);
    }
    else if(OP == '*')
    {
        prod(N1, N2);
    }
    else if(OP == '/')
    {
        div(N1, N2);
    }
    else if(OP == '^')
    {
        pot(N1, N2);
    }

    printf("\n");

    return 0;
}

void soma(float X, float Y)
{
    float R = X + Y;
    printf("%.3f", R);
}

void sub(float X, float Y)
{
    float R = X - Y;
    printf("%.3f", R);
}

void prod(float X, float Y)
{
    float R = X * Y;
    printf("%.3f", R);
}

void div(float X, float Y)
{
    float R = X / Y;
    printf("%.3f", R);
}

void pot(float X, float Y)
{
    float R = (pow(X, Y));
    printf("%.3f", R);
}
