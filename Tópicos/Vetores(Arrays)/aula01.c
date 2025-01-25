#include <stdio.h>
#define MAX 1000

int main()
{

    int N;
    scanf("%d",&N);
    double x[MAX];
    int i;
    double soma = 0.0;
    double media;
    int c=0;

    for(i = 0;i<N; i++){
        scanf("%lf",&x[i]);
        soma = soma + x[i];
    }

    media = soma/N;

    

    for(i = 0;i<N; i++){
        if(x[i]>=media) c++;
    }

    printf("Maior ou igual a media: %d notas\n", c);

    return 0;
}