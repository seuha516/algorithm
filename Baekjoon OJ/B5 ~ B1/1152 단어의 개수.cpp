#include <stdio.h>

int main()
{
    char a[1000001]={0,};
    scanf("%[^\n]",&a);
    int b=0;
    int c,d,e,f=0;
    for(int i=0;a[i]!=0;i++){
        c=i;
    }
    if (a[0]==' '){
        d=1;
    }else{
        d=0;
    }

    if (a[c]==' '){
        e=c-1;
    }else{
        e=c;
    }

    for(int i=d;i<=e;i++){
        if (a[i]==' '){
            b++;
        }else if (a[i]!=' '){
            f=1;
        }
    }
    if (b!=0){
        b++;
    }
    if (f==1&&b==0){
        b++;
    }
    printf("%d",b);
    return 0;
}

