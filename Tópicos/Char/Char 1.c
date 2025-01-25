#include <stdio.h>

int main()
{

    char C;
    scanf("%c",&C);
    int k =0;

    while( C != '.'){
        scanf("%c",&C);
        k++;
    }

    printf("%d", k);

    return 0;
}