#include <stdio.h>

#define MAX 100

void ler_matriz(int A[][MAX],int M);

int main()
{
    int M,N;

    scanf("%d",&M);
    int A[M][M];
    ler_matriz(A,M);

    scanf("%d",&N);
    int B[N][N];
    ler_matriz(B,N);

    return 0;
}

void ler_matriz(int A[][MAX],int M){
    int i,j;

    for(i=0;i<M;i++){
        for(j=0;j<M;j++){
            scanf("%d",&A[i][j]);
        }
    }


}