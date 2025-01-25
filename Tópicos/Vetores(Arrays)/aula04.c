#include <stdio.h>

#define MAX 100000

int indice(int v[], int N, int x); 

int main(){

    int n,x,i,v[MAX];
    int k;

    scanf("%d",&n);

    scanf("%d",&x);


    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    k=indice(v,n,x);

    printf("i = %d",k);

    return 0;
}

int indice(int v[], int N, int x){

    int j = 0;

    while(v[j] != x){
  
        if(j==N) return -1;
        j++;

    }

    return j;

}