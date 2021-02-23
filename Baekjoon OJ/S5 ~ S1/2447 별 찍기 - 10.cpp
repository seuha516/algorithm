#include <stdio.h>

int arr[3187][3187];

int dd(int a,int b,int c)
{
    if(c==1){
        return 1;
    }else{
        if(a>=(c/3)&&a<(c*2/3)&&b>=(c/3)&&b<(c*2/3)){
            return 0;
        }else{
            c=c/3;
            while(a>=c){
                a=a-c;
            }
            while(b>=c){
                b=b-c;
            }
            return dd(a,b,c);
        }
    }
}

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            arr[i][j]=dd(i,j,a);
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(arr[i][j]==1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

