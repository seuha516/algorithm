#include <stdio.h>
int main()
{
    int a=0;
    scanf("%d",&a);
    char b[160];
    int c[a];
    int d=0;

    for (int i=1;i<=a;i++){
        c[i-1]=0;
        d=0;
        scanf("%s",&b);
        for (int j=0;b[j]!=NULL;j++){
            if (b[j]=='O'){
                c[i-1]=c[i-1]+d+1;
                d=d+1;
            }else if(b[j]=='X'){
                d=0;
            }else{
                d=0;
            }
        }
    }
    for (int i=1;i<=a;i++){
    printf("%d\n",c[i-1]);
    }

    return 0;
}

