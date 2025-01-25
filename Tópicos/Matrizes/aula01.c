#include <stdio.h>

#define MAX 100

int main(){

    int N,A[MAX][MAX];

    int i,j;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(A[i][j]!=A[j][i]){
                printf("Nao eh simetrica\n");
                return 0;
            }
        }
    }

    printf("Eh simetrica\n");


    return 0;
}