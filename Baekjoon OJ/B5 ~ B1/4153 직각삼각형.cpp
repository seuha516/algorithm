#include <stdio.h>

int small(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int big(int a,int b){
    if(a<b){
        return b;
    }else{
        return a;
    }
}
int mid(int a,int b,int c){
    if((a<=b&&b<=c)||(c<=b&&b<=a)){
        return b;
    }else if((b<=a&&a<=c)||(c<=a&&a<=b)){
        return a;
    }else{
        return c;
    }
}

int main()
{
    int a,b,c,d,e,f,g;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&c==0){
            break;
        }
        if((small(small(a,b),c))*(small(small(a,b),c))+mid(a,b,c)*mid(a,b,c)==(big(big(a,b),c))*(big(big(a,b),c))){
            printf("right\n");

            }else{
                printf("wrong\n");
            }
        }


    return 0;
}
