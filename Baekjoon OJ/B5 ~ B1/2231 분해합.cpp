#include <stdio.h>

int main()
{
    int a,b,c=0,d,e,f,g;
    int aa[200]={0,};
    scanf("%d",&b);
    for(int a=1;a<=b;a++){
        if(a+a%10+(a/10)%10+(a/100)%10+(a/1000)%10+(a/10000)%10+(a/100000)%10+(a/1000000)%10+(a/10000000)%10==b&&c==0){
            c=1;
            d=a;
        }
    }

    if(c==0){
        printf("0");
    }else{
        printf("%d",d);
    }


    return 0;
}
