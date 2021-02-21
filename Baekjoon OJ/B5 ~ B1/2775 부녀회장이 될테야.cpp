#include <stdio.h>

int aaa(int b,int c){
    int d=0;
    if (b==1){
        return (c*(c+1)/2);
    }else{
        for(int i=1;i<=c;i++){
            d=d+aaa(b-1,i);
        }
        return d;
    }
}

int main()
{
    int a,b,c,d,e,f=0,g=1;

    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        scanf("%d",&c);
        printf("%d\n",aaa(b,c));
    }
    return 0;
}


