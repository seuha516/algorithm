#include <stdio.h>

int ot(int a, int b){
    if ((a==1&&b==2)||(a==2&&b==1)){
        return 3;
    }else if ((a==1&&b==3)||(a==3&&b==1)){
        return 2;
    }else{
        return 1;
    }
}
void ha(int a,int b,int c)
{
    if(a==1){
        printf("%d %d\n",b,c);
    }else{
        ha(a-1,b,ot(b, c));
        printf("%d %d\n",b,c);
        ha(a-1,ot(b, c),c);
    }

}
int main()
{
    int a,b=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b=b*2;
    }
    printf("%d\n",b-1);
    ha(a,1,3);

return 0;
}


