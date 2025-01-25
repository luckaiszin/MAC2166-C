#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    int i;
    double S = 0.0;

    for(i=0;i<N;i++){

        S = S + (double)(i+1)/(N-i);

    }

    printf("S_%d = %f",N,S);

    return 0;
}