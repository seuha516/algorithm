#include <stdio.h>

int dd(int a)
{
    int b[4];
    int c=a;
    for (int i=0;i<5;i++){
        b[i]=a%10;
        a=a/10;
        c=c+b[i];
    }
    return c;
}


int main()
{
    int c;
    int b[10500]={0,};
    for (int i=1;i<10001;i++){
        b[dd(i)]=1;
    }
    for (int i=1;i<10001;i++){
        if (b[i]!=1){
            printf("%d\n",i);
        }
    }
    return 0;
}

