#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int x,y;
    x=a;y=b+c;

    x+=y/60;
    y=y%60;
    x=x%24;


    printf("%d %d",x,y);

    return 0;
}

