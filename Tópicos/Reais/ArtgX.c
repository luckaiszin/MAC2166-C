#include <stdio.h>

#define EPSILON 1e-6

int main()
{
    double x;
    scanf("%lf", &x);
    double p = x;
    double Arc = 0.0;
    int i = 3;
    double e = x;

    while (p <= -EPSILON || p >= EPSILON)
    {
        Arc += p;
        e *= (-(x * x));
        p = (e/i);
        i = i + 2;
    }

    printf("Arct(%f) = %f ", x, Arc);

    return 0;
}