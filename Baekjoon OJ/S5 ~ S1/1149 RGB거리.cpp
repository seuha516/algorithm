#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int a;
    int b[1001]={0,};
    int c[1001]={0,};
    int d[1001]={0,};
    int e[3]={0,};
    int tempe[3]={0,};
    scanf("%d",&a);

    for(int i=0;i<=a-1;i++){
        scanf("%d %d %d",&b[i],&c[i],&d[i]);
    }

    for(int i=0;i<=a-1;i++){
        if(i==0){
            e[0]=b[0];
            e[1]=c[0];
            e[2]=d[0];
        }else{
            tempe[0]=e[0];
            tempe[1]=e[1];
            tempe[2]=e[2];
            e[0]=min(b[i]+tempe[1],b[i]+tempe[2]);
            e[1]=min(c[i]+tempe[0],c[i]+tempe[2]);
            e[2]=min(d[i]+tempe[1],d[i]+tempe[0]);
        }
    }
    printf("%d",min(min(e[0],e[1]),e[2]));
    return 0;
}


