#include <stdio.h>

int main()
{
    int a,b=0;
    scanf("%d",&a);
    if(a==4||a==7){
        printf("-1");
    }else{
        while(a%5!=0&&a>=0){
            a=a-3;
            b++;
        }
        printf("%d",b+(a/5));
    }

    return 0;
}

