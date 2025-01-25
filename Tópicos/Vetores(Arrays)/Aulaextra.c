#include <stdio.h>

#define MAX 1000

int main()
{

    int N;
    int V[MAX],X[MAX];
    int i;
    int j;
    int e = 0;

    scanf("%d",&N);

    for(i=0;i<N;i++){

        int c = 0;
        scanf("%d",&V[i]);

        for(j=0;j<i;j++){

            if(V[i]==V[j]){
                c++;
                break;
            }
            
        }

        if(c==0) X[e++]=V[i];

    }

    printf("\n");

    for(i=0;i<e;i++){
        printf("%d\n",X[i]);
    }


    return 0;
}

