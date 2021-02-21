#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a,&b);
    c=b-45;
    if (c>=0){
        printf("%d %d",a,c);
    }else{
        a=a-1;
        if (a>=0){
            printf("%d %d",a,60+c);
        }else
        printf("%d %d",a+24,60+c);
    }

    return 0;
}
