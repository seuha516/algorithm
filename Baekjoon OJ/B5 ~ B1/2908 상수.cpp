
#include <stdio.h>

int main()
{
    int a,b;
    int c,d,e;
    scanf("%d %d",&a,&b);
    c=a/100;
    d=(a/10)%10;
    e=a%10;
    a=c+(10*d)+(100*e);

    c=b/100;
    d=(b/10)%10;
    e=b%10;
    b=c+(10*d)+(100*e);

    if(a>b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }


    return 0;
}

