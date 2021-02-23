#include <stdio.h>

int sq(int a){
    return a*a;
}
int jj(int a){
    if (a<0){
        return a*(-1);
    }else{
        return a;
    }
}
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&g);
    for(int i=1;i<=g;i++){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if(a==d&&b==e&&c==f){
            printf("-1\n");
        }else if(sq(jj(f-c))<sq(a-d)+sq(b-e)&&sq(jj(f+c))>sq(a-d)+sq(b-e)){
            printf("2\n");
        }else if(sq(jj(f-c))==sq(a-d)+sq(b-e)||sq(jj(f+c))==sq(a-d)+sq(b-e)){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }


    return 0;
}

