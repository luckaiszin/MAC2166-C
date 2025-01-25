#include <stdio.h>

int dig(int x);

int main()
{

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        dig(n);

    }
    

    return 0;
}

int dig(int x)
{

    int c = 0;
    int last=0;

    while (x > 0)
    {
       if (x / 10 == 0)
            last = x;
        x = x / 10;
        c++;
        
    }

    printf("digitos: %d\n", c);
    printf("primeiro digito: %d\n", last);
}