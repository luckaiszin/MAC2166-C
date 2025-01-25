#include <stdio.h>
#define MAX 10000

int main(){

    int M,N;
    int x[MAX],y[MAX],z[2*MAX];
    int i,j,k;
    scanf("%d %d",&M,&N);

    

    for(i=0;i<M;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<N;i++){
        scanf("%d",&y[i]);
    }


    i=j=0;

    for(k=0;k<M+N;k++){
        if(i==M) z[k] = y[j++];
        else if(j==N) z[k] = x[i++];
        else if(x[i]<=y[j]){
            z[k] = x[i++];
        }
        else{
            z[k] = y[j++];
        }   
    }
    
    printf("\n");

    for(k=0;k<M+N;k++){
        printf("%d\n",z[k]);
    }

    return 0;
}