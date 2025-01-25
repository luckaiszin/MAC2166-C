#include <stdio.h>
#define MAX 10000

int main()
{
    int N;
    scanf("%d",&N);
    int x[MAX];
    int f[MAX];
   
    int i;
    int j;

    for(i = 0;i<N;i++){
        scanf("%d",&x[i]);
    }

    for(j=0;j<37;j++){

        int c=0;

        for(i = 0;i<N;i++){
            if(x[i] == j) c++; 
        }

        f[j] = c;
    }

    for(j=0;j<37;j++){
        printf("%3d",j);
    }

    printf("\n");

    for(j=0;j<37;j++){
        printf("%3d",f[j]);
    }

    printf("\n");

    return 0;
}