#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int c=1000000;
    int d=-1000000;
    scanf("%d",&a);
    int b[a-1];
    for (int i=1;i<=a;i++){
        scanf("%d", &b[i-1]);
        if(b[i-1]<=c){
            c=b[i-1];
        }
        if(b[i-1]>=d){
            d=b[i-1];
        }
    }
    printf("%d %d",c,d);

    return 0;
}

