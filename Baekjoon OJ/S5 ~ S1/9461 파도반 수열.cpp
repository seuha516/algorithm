#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    scanf("%d",&b);
    long long c[101];
    for(int j=1;j<=100;j++){
        if(j<4){
            c[j]=1;
        }else{
            c[j]=(c[j-3]+c[j-2]);
        }
    }
    for(int i=1;i<=b;i++){
        scanf("%d",&a);
        printf("%lld\n",c[a]);
    }

    return 0;
}

