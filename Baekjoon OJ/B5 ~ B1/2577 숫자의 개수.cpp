#include <stdio.h>
int main()
{
    int a,b,c;
    int d=1;
    int e[100000];
    int f=0;
    int g[11]={0,};
    scanf("%d %d %d",&a,&b,&c);
    a=a*b*c;
    while(d!=0){
        d=a/10;
        e[f]=a%10;
        a=d;
        f++;
    }
    f--;
    while(f>=0){
        for(int i=0;i<=9;i++){
            if(e[f]==i){
                g[i]++;
            }
        }
        f--;
    }
    for(int i=0;i<=9;i++){
        printf("%d\n",g[i]);
    }

    return 0;
}

