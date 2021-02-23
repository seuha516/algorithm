#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; scanf("%d",&a);

    int zero[50];
    int one[50];
    zero[0]=1; zero[1]=0;
    one[0]=0; one[1]=1;

    for(int i=2;i<50;i++){
        zero[i]=zero[i-1]+zero[i-2];
        one[i]=one[i-1]+one[i-2];
    }

    for(int i=1;i<=a;i++){
        int v; scanf("%d",&v);
        printf("%d %d\n",zero[v],one[v]);
    
    return 0;
}

