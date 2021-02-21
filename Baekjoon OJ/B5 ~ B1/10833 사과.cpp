#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kk; scanf("%d",&kk);
    
    int t=0;
    
    for(int i=0;i<kk;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        t+=b%a;
    }
    
    printf("%d",t);

    return 0;
}

