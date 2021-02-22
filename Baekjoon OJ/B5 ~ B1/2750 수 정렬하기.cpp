#include <stdio.h>
int main()
{
    int a,c,d;
    int b[2000]={0,};
    scanf("%d",&a);
    for(int i=0;i<=a-1;i++){
        scanf("%d",&b[i]);
    }
    for(int i=1;i<=a-1;i++){
            d=i;
        while(1){
            if(d==0){
                break;
            }else if(b[d-1]>b[d]){
                c=b[d-1];
                b[d-1]=b[d];
                b[d]=c;
            }
            d--;
        }
    }

    for(int i=0;i<=a-1;i++){
        printf("%d\n",b[i]);

    }


    return 0;
}

