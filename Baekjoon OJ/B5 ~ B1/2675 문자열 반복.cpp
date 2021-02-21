#include <stdio.h>

int main()
{
    int a,b;
    char c[200]={0,};
    char d[200]={0,};
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<=200;j++){
            c[j]=0;
            d[j]=0;
        }
        scanf("%d",&b);
        scanf("%s",&c);
        for(int j=0;c[j]!=0;j++){
            for(int k=0;k<b;k++){
                d[b*j+k]=c[j];
            }
        }
        printf("%s\n",d);
    }
    return 0;
}

