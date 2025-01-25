#include <stdio.h>

int encaixa(int a, int b);

int main(){

    int n1;
    int n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    int x;

    if(n1<n2){
        while(n2!=n1)
        {
        n2=n2/10;
        if(encaixa(n2 , n2)==1)
       {printf("b eh segmento de a");
       return 0;}
        if(n2==0) {printf("um nao eh segmento do outro"); return 0;}
        }
        }

   while(n1!=n2){
        n1=n1/10;
        if(encaixa(n1 , n2)==1)
       {printf("a eh segmento de b");
       return 0;}

        if(n1==0) {printf("um nao eh segmento do outro"); return 0;}
    }
 



    return 0;
}

int encaixa(int a, int b){

int i;
int x=a;

for(i=1; a!=b ;i=i*10){
    a=x;
    a=a%i;

    if(a==x)  break;

}

if(a==b)  return 1;
else return 0;

}
