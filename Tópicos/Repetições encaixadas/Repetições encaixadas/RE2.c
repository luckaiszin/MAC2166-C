#include <stdio.h>

int main (){

    int n;
    scanf("%d",&n);
    int a;
    int b;
    int h;

    for(h=1;h<=n;h++){
        for(a=1;a<h;a++){
            for(b=1;b<=a;b++){
                if((h*h)== (a*a) +(b*b)) printf("%d\n",h);
            }  
        }
    }


    return 0;
}