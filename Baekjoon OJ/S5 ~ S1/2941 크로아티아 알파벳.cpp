#include <stdio.h>

int main()
{
    int a=0,b=0;
    char c[150];
    scanf("%s",&c);
    for(int i=0;c[i]!=0;i++){
        a=i;
        if(c[i]=='='){
            if(c[i-1]=='c'||(c[i-1]=='z'&&c[i-2]!='d')||c[i-1]=='s'){
                b--;
            }else if(c[i-1]=='z'&&c[i-2]=='d'){
                b--;
                b--;
            }
        }else if(c[i]=='-'){
            if(c[i-1]=='c'||c[i-1]=='d'){
                b--;
            }
        }else if(c[i]=='j'){
            if(c[i-1]=='l'||c[i-1]=='n'){
                b--;
            }
        }
    }
    printf("%d",a+1+b);

    return 0;
}

