#include <stdio.h>
#define ROLETA 36

int main(){

    int f[ROLETA+1];
    int i;
    for(i=0;i<=ROLETA;i++){
        f[i]=0;
    }

    int N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        int e;
        scanf("%d",&e);
        f[e]++;
    }

    for(i=0;i<=ROLETA;i++){
        printf("%3d",i);
    }

    printf("\n");

    for(i=0;i<=ROLETA;i++){
        printf("%3d",f[i]);
    }

    printf("\n");

    return 0;
}