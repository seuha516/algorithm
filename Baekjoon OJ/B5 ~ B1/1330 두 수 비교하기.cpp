#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a,&b);
    c=a-b;
    if (c>0)
        printf(">");
    else if (c==0)
        printf("==");
    else
        printf("<");


    return 0;
}

