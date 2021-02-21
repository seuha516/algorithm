#include <stdio.h>

int main()
{
    int a,b,c,d,e,f=0,g=1;

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        scanf("%d %d %d",&b,&c,&d);
        e=d%b;
        if(e==0){
            f=d/b-1;
        }else{
            f=d/b;
        }

        if(e==0){
            e=b;
        }
        printf("%d",e);
        if(f+1<10){
            printf("0");
        }
        printf("%d\n",f+1);
    }

    return 0;
}

