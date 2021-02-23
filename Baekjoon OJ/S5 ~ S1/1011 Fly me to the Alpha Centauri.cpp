#include <stdio.h>
int main()
{
    int a,b,c,d,e,f=0,g=1;

    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d %d",&b,&c);
        b=c-b;
        f=0;
        g=1;
        while(1){
            b=b-g;
            f++;
            if(b<=0){
                break;
            }
            b=b-g;
            f++;
            if(b<=0){
                break;
            }
            g++;



        }
        printf("%d\n",f);

    }

    return 0;
}

