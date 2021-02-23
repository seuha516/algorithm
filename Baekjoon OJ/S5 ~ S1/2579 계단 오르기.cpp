#include <stdio.h>
#include <stdlib.h>


int a;
int b[500]={0,};
int c1[500]={0,};
int c2[500]={0,};
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
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
    }

    if(a<=2){
        printf("%d",b[1]+b[2]);
    }else if(a==3){
        printf("%d",max(b[1],b[2])+b[3]);
    }else{
        c1[2]=b[2];
        c2[2]=b[1]+b[2];
        c1[3]=b[1]+b[3];
        c2[3]=b[2]+b[3];

        for(int i=4;i<=a;i++){
            c2[i]=c1[i-1]+b[i];
            c1[i]=b[i]+max(c1[i-2],c2[i-2]);
        }

        printf("%d",max(c1[a],c2[a]));
    }

    return 0;
}


