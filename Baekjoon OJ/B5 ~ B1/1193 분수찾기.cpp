#include <stdio.h>
int main()
{
    int a,e=1;
    int b=1,c=1,d=2,f=1;
    int g,h;
    int i=-1;
    scanf("%d",&a);
    e=a;
    while(1){
        if(b<=e&&e<=c){
            break;
        }
        b=c+1;
        c=c+d;
        a=a-f;
        d++;
        f++;
        i=i*(-1);
    }
    if(i==1){
        g=a;
        h=d-a;
    }else{
        g=d-a;
        h=a;
    }

    printf("%d/%d",g,h);
    return 0;
}

