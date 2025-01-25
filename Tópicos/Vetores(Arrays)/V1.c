#include <stdio.h>
#define MAX 10000

int main(){

    int n,x[MAX];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }


    for(int j=n-1; j>=0;j--){
        printf("%d",x[j]);
    }


    return 0;
}