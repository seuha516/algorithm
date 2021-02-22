#include <stdio.h>

int main()
{
    char a;
    int b=0;
    char c[1000000]={0,};
    int d[200]={0,};
    scanf("%s",c);
    for (int i=0;c[i]!=0;i++){
        if(c[i]>96){
            c[i]=c[i]-32;
        }
        d[c[i]]++;
    }
    for (int i=65;i<91;i++){
        if (d[i]>b){
            a=i;
            b=d[i];
        }else if(d[i]==b){
            a='?';
        }
    }
    printf("%c",a);
    return 0;
}

