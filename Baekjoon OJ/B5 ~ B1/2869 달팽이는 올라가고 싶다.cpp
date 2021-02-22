#include <stdio.h>
int main()
{
    int a,b,c,d,e,f=0,g=1;

    scanf("%d %d %d",&a,&b,&c);

    c=c-a;
    a=a-b;
    if(c%a==0){
        c=c/a;
    }else{
        c=c/a+1;
    }

    printf("%d",c+1);
    return 0;
}

