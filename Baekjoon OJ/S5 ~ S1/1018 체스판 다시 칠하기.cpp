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
    int a,b,d,e,f=64;
    int cc;
    int iii;
    scanf("%d %d",&a,&b);
    char c[100][100]={0,};

    for(int i=0;i<=a-1;i++){
        scanf("%s",&c[i]);
    }

    for(int i=0;i<=a-8;i++){
        for(int j=0;j<=b-8;j++){
            d=0;
            for(int aaa=0;aaa<=7;aaa++){
                for(int bbb=0;bbb<=7;bbb++){
                    if(c[i+aaa][j+bbb]=='W'&&(((aaa%2==0)&&(bbb%2==0))||((aaa%2!=0)&&(bbb%2!=0)))){
                        d++;
                    }else if(c[i+aaa][j+bbb]=='B'&&(((aaa%2==0)&&(bbb%2!=0))||((aaa%2!=0)&&(bbb%2==0)))){
                        d++;
                    }
                }
            }
            f=small(f,small(d,64-d));
        }
    }

    printf("%d",f);
    return 0;
}


