#include <stdio.h>
int dd(int a)
{
    int b,c,d;
    if (a<100){
        return 1;
    }else if(a<1000){
        b=a/100;
        c=(a/10)%10;
        d=a%10;
        if (b-c==c-d){
            return 1;
        }else{
            return 0;
        }

    }else{
        return 0;
    }
}

int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b=b+dd(i);
    }
    printf("%d",b);
    return 0;
}


