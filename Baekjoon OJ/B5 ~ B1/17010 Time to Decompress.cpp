#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; scanf("%d",&a);

    for(int i=0;i<a;i++){
        int x; char y;
        scanf("%d %c",&x,&y);

        for(int j=0;j<x;j++){
            printf("%c",y);
        }
            printf("\n");

    }
    return 0;
}

