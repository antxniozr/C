#include <stdio.h>
#include <math.h>

void media (float X, float Y, char C)
{
    float M;
    if (C == 'A')
    {
        M = ((X + Y) / 2);
    }
    else if(C == 'B')
    {
        M = sqrt(X * Y);
    }
    printf("%.3f\n", M);
}

int main ()
{
    float N1, N2;
    char C;

    scanf("%c", &C);
    scanf("%f %f", &N1, &N2);

    media(N1, N2, C);

    return 0;
}