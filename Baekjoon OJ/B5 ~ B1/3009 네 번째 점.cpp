#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;

    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    scanf("%d %d",&e,&f);

    if((a-c)*(e-c)+(b-d)*(f-d)==0){
            
        
        printf("%d %d",e-c+a,f-d+b);
    }else if((a-e)*(c-e)+(b-f)*(d-f)==0){
        printf("%d %d",c-e+a,d-f+b);
    }else if((e-a)*(c-a)+(d-b)*(f-b)==0){
        printf("%d %d",e+c-a,f+d-b);
    }

    return 0;
}
