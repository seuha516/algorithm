#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; scanf("%d",&a);


    int list[1000]={0,};
    int t=0;

    for(int i=0;i<a;i++){
        int x; scanf("%d",&x);

        if(list[x]==0){
            list[x]=1;
        }else{
            t++;
        }

    }
    printf("%d",t);


    return 0;
}

