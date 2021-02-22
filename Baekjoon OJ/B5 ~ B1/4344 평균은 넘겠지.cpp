#include <stdio.h>
int main()
{
    int a=0;
    int b;
    float f;
    double c[2000];
    double d[2000];
    double e=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        e=0;
        scanf("%d",&b);
        f=b;
        for(int j=1;j<=b;j++){
            scanf("%lf",&c[j]);
            d[i]=d[i]+c[j];
        }
        d[i]=d[i]/f;
        for(int j=1;j<=b;j++){
            if (c[j]>d[i]){
                e++;
            }
        }
        printf("%.3lf%%\n",e/f*100);
    }
    return 0;
}

