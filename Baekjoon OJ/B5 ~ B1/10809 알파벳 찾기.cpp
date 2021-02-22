#include <stdio.h>

int main()
{
    char b[100]={0,};
    int c[200]={0,};
    scanf("%s",&b);

    for(int i=0;b[i]!=0;i++){
        if(c[b[i]]==0){
            c[b[i]]=i+1;
        }
    }
    for(int i=97;i<123;i++){
        if(c[i]==0){
            printf("-1 ");
        }else{
        printf("%d ",c[i]-1);
        }
    }
    return 0;
}

