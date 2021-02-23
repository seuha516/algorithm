#include <stdio.h>


int main()
{
    int aa,b;
    scanf("%d",&aa);
    int c[10001]={0,};
    for(int i=1;i<=aa;i++){
        scanf("%d",&b);
        c[b]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=1;j<=c[i];j++){
            printf("%d\n",i);
        }
	}


    return 0;
}


