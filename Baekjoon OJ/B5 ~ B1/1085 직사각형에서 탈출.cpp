#include <stdio.h>

int small(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=c-a;
    f=d-b;
    printf("%d",small(small(e,a),small(f,b)));

    return 0;
}

