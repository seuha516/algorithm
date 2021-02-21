#include <stdio.h>

int main()
{
    int a=0;
    char c[20];
    scanf("%s",&c);
    for(int i=0;c[i]!=0;i++){
        if(c[i]<68){
           a=a+3;
        }else if(c[i]<71){
            a=a+4;
        }else if(c[i]<74){
            a=a+5;
        }else if(c[i]<77){
            a=a+6;
        }else if(c[i]<80){
            a=a+7;
        }else if(c[i]<84){
            a=a+8;
        }else if(c[i]<87){
            a=a+9;
        }else if(c[i]<91){
            a=a+10;
        }
    }
    printf("%d",a);

    return 0;
}

