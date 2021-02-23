#include <stdio.h>

int main()
{
    int a,c,d=0;
    int b[200]={0,};
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        c=0;
        scanf("%d",&b[i]);
        for(int j=2;j<=1000;j++){
            if(b[i]%j==0){
                c++;
            }
        }
        if(c!=1){
            c=0;
        }
        if(b[i]==1){
            c=0;
        }
        d=d+c;
    }
    printf("%d",d);

    return 0;
}

