#include <stdio.h>

#define ROLETA 36

int main (){

    int f[ROLETA + 1];
    int N,e,i;

    scanf("%d",&N);

    for(i=0;i<=ROLETA;i++){
        f[i]=0;
    }

    for(i=0;i<N;i++){
        scanf("%d",&e);
        f[e]++;

    }

    for(i=0;i<=ROLETA;i++){
        printf("%3d ",i);
    }

    printf("\n");

    for(i=0;i<=ROLETA;i++){
        printf("%3d ",f[i]);
    }


    return 0;
}