#include <stdio.h>

int main()
{
    int a,c,d=0,f=-1,g=0;
    int e=0;
    int b;
    int cc[1000100]={0,};
    
    
    for(int i=2;i<=1000001;i++){
        cc[i]=i;
    }
    scanf("%d %d",&a,&b);
    for(int i=2;i<=1000;i++){
            g=i+i;
        while(g<=1000000){
            cc[g]=0;
            g=g+i;
        }
    }
    for(int i=a;i<=b;i++){
        if(cc[i]!=0){
            printf("%d\n",cc[i]);
        }
    }
    return 0;
}

