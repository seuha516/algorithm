#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    int c[1000001]={0,};

    for(int i=1;i<=1000000;i++){
        if(3*i<1000001){
            if(c[3*i]>c[i]+1||c[3*i]==0){
                c[3*i]=c[i]+1;
            }
        }

        if(2*i<1000001){
            if(c[2*i]>c[i]+1||c[2*i]==0){
                c[2*i]=c[i]+1;
            }
        }

        if(1+i<1000001){
            if(c[1+i]>c[i]+1||c[1+i]==0){
                c[1+i]=c[i]+1;
            }
        }

    }
    printf("%d",c[a]);

    return 0;
}

