#include <stdio.h>

int main()
{
    int a,b,c=0;
    char d[200];
    int e[200]={0,};
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        b=1;
        scanf("%s",&d);
        for(int j=0;d[j]!=0;j++){
            e[d[j]]++;
            if(j!=0&&e[d[j]]!=1&&d[j]!=d[j-1]){
                b=0;
            }
        }
        for(int h=0;h<=200;h++){
            d[h]=0;
            e[h]=0;
        }
        c=c+b;
    }
    printf("%d",c);
    return 0;
}

