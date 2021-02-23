#include <stdio.h>

int main()
{
    int a;
    int aa=0;
    int b[12]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int c[10]={0,};
    scanf("%d",&a);
    while(a!=0){
        b[aa]=a%10;
        a=a/10;
        c[b[aa]]++;
        aa++;
    }

    for(int i=9;i>=0;i--){
        for(int j=1;j<=c[i];j++){
            printf("%d",i);
        }
    }

    return 0;
}

