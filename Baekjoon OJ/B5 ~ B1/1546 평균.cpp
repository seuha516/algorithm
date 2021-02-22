#include <stdio.h>
int main()
{
    int a;
    float c;
    float e=0;
    float b=0;
    scanf("%d",&a);
    float d[a-1];
    for (int i=0;i<=a-1;i++){
        scanf("%d",&d[i]);
        if (d[i]>e){
            e=d[i];
        }
    }
    for (int i=0;i<=a-1;i++){
        d[i]=d[i]*100/e;
        b=b+d[i];
    }
    c=a;
    printf("%f",b/c);

    return 0;
}
