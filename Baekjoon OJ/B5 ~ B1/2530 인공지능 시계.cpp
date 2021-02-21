#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int x,y,z;
    
    z=c+d;
    y=b;
    x=a;

    y+=z/60;
    z%=60;
    x+=y/60;
    y%=60;
    x%=24;

    printf("%d %d %d",x,y,z);

    return 0;
}

