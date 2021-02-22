#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Fib[91]={0,};
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        if(i<2){
            Fib[i]=i;
        }else{
            Fib[i]=Fib[i-1]+Fib[i-2];
        }
    }
    printf("%lld",Fib[a]);
    return 0;
}

