#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a+1];
    int c[a+1];
    int d[a+1];
    int e=0;

    for(int i=1;i<=a;i++){
        scanf("%d %d",&b[i],&c[i]);
    }
    for(int i=1;i<=a;i++){
            d[i]=0;
        for(int j=1;j<=a;j++){
            if(b[j]>b[i]&&c[j]>c[i]){
                d[i]++;
            }
        }
        printf("%d",d[i]+1);
        if (i!=a){
            printf(" ");
        }
    }
    
    return 0;
}

