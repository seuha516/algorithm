#include <stdio.h>
int main()
{
    int a;
    int b=1,c=1,d=1;
    scanf("%d",&a);
    while(1){
        if(b<=a&&a<=c){
            break;
        }
        b=c+1;
        c=c+6*d;
        d++;
    }
    printf("%d",d);
    return 0;
}

