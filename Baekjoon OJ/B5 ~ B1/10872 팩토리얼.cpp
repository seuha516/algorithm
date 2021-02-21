#include <stdio.h>

int dd(int a)
{
    int d=1;
    for (int i=1;i<=a;i++){
        d=d*i;
    }
    return d;
}


int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
    printf("%d",dd(a));
}


