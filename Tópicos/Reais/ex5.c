#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f  %f  %f", &a, &b, &c);
    float delta;
    delta = b * b - 4 * a * c;
 
    /* float k;
    scanf("%f", &k);
    float p;
    p = sqrt(k);
    printf("%f",p); */

    if (delta < 0)
    {
        float preal = -b / (2 * a);
        float pimaginaria = (sqrtf(delta / (-1))) / 2 * a;
        printf("c.COMPLEXAS\n");
        printf("parte real: %2f\n", preal);
        printf("parte imaginaria: %2f\n", pimaginaria);
    }

    if (delta == 0)
    {
        float raizd;
        raizd = -b / (2 * a);
        printf(" a.DUPLA\n");
        printf("raiz: %f\n", raizd);
    }

    if (delta > 0)
    {
        float x1;
        float x2;

        x1 = (-b + sqrtf(delta)) /(2 * a);
        x2 = (-b - sqrtf(delta)) /( 2 * a);
        printf(" b.REAIS DISTINTAS\n");
        printf("raiz 1: %f\n", x1);
        printf("raiz 2: %f\n", x2);
    }

    return 0;
}