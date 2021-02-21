#include <stdio.h>
int main()
{
    int b[10];
    int e;
    int d=0;
    for (int i=1;i<=9;i++){
        scanf("%d", &b[i-1]);
        if(b[i-1]>d){
            d=b[i-1];
            e=i;
        }
    }
    printf("%d\n%d",d,e);

    return 0;
}

