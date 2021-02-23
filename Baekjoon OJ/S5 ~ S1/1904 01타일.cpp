#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    scanf("%d",&b);
    int c[b+1];
    for(int j=0;j<=b;j++){
        if(j<2){
            c[j]=j+1;
        }else{
            c[j]=(c[j-2]+c[j-1])%15746;
        }
    }

    printf("%d",c[b-1]);

    return 0;
}

