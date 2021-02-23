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
    int b[501][501]={0,};
    int c[501]={0,};
    int tempc[501]={0,};
    int dap=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&b[i][j]);
        }
    }
    c[1]=b[1][1];
    for(int i=2;i<=a;i++){
        for(int j=1;j<=i;j++){
            tempc[j]=b[i][j]+max(c[j-1],c[j]);
        }
        for(int j=1;j<=i;j++){
            c[j]=tempc[j];

        }

    }
    for(int i=1;i<=a;i++){
        dap=max(c[i],dap);
    }
    printf("%d",dap);
    return 0;
}


