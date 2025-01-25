#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    double x;
    scanf("%lf", &x);
    int i;
    double k = x;
    double Sen = 0.0;
    int f=0;

    for(i=0;i<N;i++){
        Sen+=k;
        k=k*(-(x*x)/((f+2)*(f+3)));
        f=f+2;

    }

    printf("Sen(%f) = %f ",x,Sen);


    return 0;
}