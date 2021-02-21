#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kk=5;
    int t=0;
    
    for(int i=0;i<kk;i++){
        int aa;
        scanf("%d",&aa);
        t+=aa;
    }
    printf("%d",t);

    return 0;
}

