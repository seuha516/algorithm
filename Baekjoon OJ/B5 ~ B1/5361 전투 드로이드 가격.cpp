#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kk; scanf("%d",&kk);


    for(int i=0;i<kk;i++){

        float a,b,c,d,e;
        scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

        float x=0;

        x+=350.34*a;
        x+=230.9*b;
        x+=190.55*c;
        x+=125.30*d;
        x+=180.9*e;

        printf("$%0.2f\n",x);

    }
    return 0;
}

