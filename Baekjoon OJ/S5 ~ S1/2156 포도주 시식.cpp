#include <stdio.h>
#include <stdlib.h>


int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int max(int a, int b){
    if(b>a){
        return b;
    }else{
        return a;
    }
}
int main()
{
    int a;
    int b[10005]={0,};
    int c0[10005]={0,};
    int c1[10005]={0,};
    int c2[10005]={0,};

    int aaaa;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
    }

    c1[1]=b[1];
    if(a==1){
        printf("%d",b[1]);
    }else{
        for(int i=2;i<=a;i++){
            c0[i]=max(c0[i-1],max(c1[i-1],c2[i-1]));
            c1[i]=b[i]+c0[i-1];
            c2[i]=b[i]+c1[i-1];
        }
        printf("%d",max(c0[a],max(c1[a],c2[a])));
    }

    return 0;
}


