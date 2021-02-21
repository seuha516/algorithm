#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d",&a,&b,&c);
    if (b>a){
        d=b;
        b=a;
        a=d;
    }

    if (c>a){
        d=c;
        c=a;
        a=d;
    }

    if (c>b){
        d=c;
        c=b;
        b=d;
    }

    printf("%d",b);
    return 0;
}

