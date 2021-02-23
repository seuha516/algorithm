#include <stdio.h>

int main()
{
    int a,c,d=0,f=-1,g=0;
    int e=0;
    int b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        c=0;
        for(int j=2;j<=10000;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c!=1){
            c=0;
        }
        if(i==1){
            c=0;
        }
        if(c==1&&e==0){
            f=i;
            e=1;
        }
        if(c==1){
            d=d+i;
        }
    }
    if(f==-1){
        printf("-1");
    }else{
        printf("%d\n%d",d,f);
    }

    return 0;
}

