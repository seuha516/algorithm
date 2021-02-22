#include <stdio.h>

int main()
{
    int a,d=0;
    scanf("%d",&a);

    char b[a];
    int c[a];

    scanf("%s",&b);
    for(int i=0;i<a;i++){
        c[i]=b[i]-48;
        d=d+c[i];
    }
    printf("%d",d);
    return 0;
}

