#include <stdio.h>
int main()
{
    int a,b;
    int c,d;
    int e=0;
    int f=0;
    scanf("%d",&a);
    b=a;
    while(a!=b||e==0){
        c=a/10;
        d=a%10;
        a=10*d+((c+d)%10);
        f++;
        e=1;
    }
    printf("%d",f);
    return 0;
}

