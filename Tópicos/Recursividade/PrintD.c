//////////////////////////imprime inteiros/////////////////////////////////////////////

#include <stdio.h>

void printd(int x);

int main(){

    int x;
    scanf("%d",&x);
    printd(x);

    return 0;
}

void printd(int x){

    if(x==0) printf("%d",0);
    else printd("%d %d",x,x-1);
}
