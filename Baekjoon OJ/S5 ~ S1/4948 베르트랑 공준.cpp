#include <stdio.h>

int main()
{
    int a,c,d=0,f=-1,g=0;
    int e=0;
    int b;
    int cc[400000]={0,};


    for(int i=2;i<=300000;i++){
        cc[i]=i;
    }
    for(int i=2;i<=600;i++){
            g=i+i;
        while(g<=300000){
            cc[g]=0;
            g=g+i;
        }
    }

    while(1){
        d=0;
        scanf("%d",&a);
        if(a==0){
            break;
        }else{
            for(int i=a+1;i<=2*a;i++){
                if(cc[i]!=0){
                    d++;
                }
            }
            printf("%d\n",d);
        }

    }

    return 0;
}


