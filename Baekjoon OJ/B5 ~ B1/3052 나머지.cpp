#include <stdio.h>
int main()
{
    int a[11];
    int b[42]={0,};
    int c=0;
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
        a[i]=a[i]%42;
    }

    for (int i=0;i<=41;i++){
        for(int j=0;j<=9;j++){
            if (a[j]==i){
                b[i]=1;
            }
        }
    }
    for(int j=0;j<=41;j++){
        c=c+b[j];
    }
    printf("%d",c);

    return 0;
}

