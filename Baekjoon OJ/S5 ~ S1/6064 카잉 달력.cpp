#include <stdio.h>

int big(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int a,b,c,d,e,f=0,g=0;
    int aa,bb,cc;
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        f=0;
        g=0;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        bb=d;
        aa=d;
        if (bb>c){
            if(bb%c==0){
                bb=c;
            }else{
                bb=bb%c;
            }
        }
        for(int i=1;i<=big(b,c);i++){
            if(bb==e&&g==0){
                f=aa;
                g=1;
            }else{
                bb=bb+b-c;
                if(bb<=0){
                    bb=bb+c;
                    if(bb>c){
                        if(bb%c==0){
                            bb=c;
                        }else{
                            bb=bb%c;
                        }
                    }
                }else if(bb>c){
                    if(bb%c==0){
                        bb=c;
                    }else{
                        bb=bb%c;
                    }
                }
                aa=aa+b;
            }
        }
        if(f!=0){
            printf("%d\n",f);
        }else{
            printf("-1\n");
        }
    }
    return 0;
}





