#include <stdio.h>

int main()
{
    long a,b,c,d=0,e=0;;
    scanf("%d %d %d",&a,&b,&c);
    if (b>=c){
      printf("-1");
    }else{
        c=c-b;
        printf("%d",a/c+1);
    }

    return 0;
}

