#include <stdio.h>
#include <math.h>

float volume_esfera (float X)
{
    float V = (4 * 3.14159 * ((X * X * X))) / 3;
    return V;
}

int main()
{
    float r;
    scanf("%f", &r);
    printf("%.2f\n", volume_esfera(r));

    return 0;
}