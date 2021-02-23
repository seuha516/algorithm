#include <stdio.h>
int main()
{
    int a,b,c,d,e,f=0;
    scanf("%d",&a);

    e=665;
    int on=0;
    int aaa[100]={0,};

    while(f<a){
        d=e;
        c=0;
        b=0;
        on=0;

        for(int i=0;i<=80;i++){
            aaa[i]=0;
        }

        while(d!=0){
                aaa[c]=d%10;
                d=d/10;
                c++;2;
        }

        for(int i=0;i<=100;i++){

            if(aaa[i]==6){
                b++;
            }else{
                b=0;
            }

            if(b>=3){
                on=1;
            }

        }

        if(on==1){
            f++;
        }
        e++;
    }

    printf("%d",e-1);

    return 0;
}




