#include <stdio.h>
#include <stdlib.h>

int main()
{
    int list[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};

    int a,b; scanf("%d %d",&a,&b);
    int x=list[a]+b;
    x%=7;

    if(x==0){
        printf("SUN");
    }else if(x==1){
        printf("MON");
    }else if(x==2){
        printf("TUE");
    }else if(x==3){
        printf("WED");
    }else if(x==4){
        printf("THU");
    }else if(x==5){
        printf("FRI");
    }else if(x==6){
        printf("SAT");
    }

    return 0;
}

