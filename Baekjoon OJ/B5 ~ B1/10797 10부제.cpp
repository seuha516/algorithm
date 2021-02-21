#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; scanf("%d",&a);

    int x,xx,xxx,xxxx,xxxxx;
    scanf("%d %d %d %d %d",&x,&xx,&xxx,&xxxx,&xxxxx);

    int t=0;
    if(a==x){
        t++;
    }
    if(a==xx){
        t++;
    }
    if(a==xxx){
        t++;
    }
    if(a==xxxx){
        t++;
    }
    if(a==xxxxx){
        t++;
    }

    printf("%d",t);


    return 0;
}

