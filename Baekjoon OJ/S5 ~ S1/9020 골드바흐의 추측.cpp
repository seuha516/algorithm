#include <stdio.h>

int main()
{
    int a,b,c,d,e=0,f=1,g;
    int aa[20001]={0,};
    for(int i=2;i<=20000;i++){
        aa[i]=i;
    }
    for(int i=2;i<=201;i++){
        g=i+i;
        while(g<=20000){
            aa[g]=0;
            g=g+i;
        }
    }

    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        e=0;
        scanf("%d",&b);
        b=b/2;
        c=2*b;
        while(e==0){
            if(aa[b]==b&&aa[c-b]==c-b){
                printf("%d %d\n",b,c-b);
                break;
            }else{
                b=b-1;
            }
        }

    }

    return 0;
}

