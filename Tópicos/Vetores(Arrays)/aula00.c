#include <stdio.h>

#define MAX 1000

int main(){

    int n,x[MAX];
    int i;
    scanf("%d",&n);

    for(i = 0; i<n;i++){
        scanf("%d",&x[i]);
    }

    printf("Ordem inversa\n");

    for( i= n-1; i>= 0; i--){

        printf("%d\n",x[i]);

    }

    return 0;
}