#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%4==0){
        if (a%400==0||a%100!=0){
            printf ("1");
        }else{
            printf("0");
        }
    }else{
        printf ("0");
    }


    return 0;
}

