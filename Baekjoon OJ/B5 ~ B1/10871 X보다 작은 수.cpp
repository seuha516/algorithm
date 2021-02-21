#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);

    int f[a-1];
    for (int i=1;i<=a;i++){
        scanf("%d",&f[i-1]);
    }
    for (int i=1;i<=a;i++){
        if (f[i-1]<b){
            printf("%d ",f[i-1]);
        }
    }
    return 0;
}

