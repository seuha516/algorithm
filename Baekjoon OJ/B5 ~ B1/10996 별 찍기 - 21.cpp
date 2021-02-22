#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a==1){
        printf("*");
    }else{
        for(int i=1;i<=a;i++){
            for(int j=1;j<=(a+1)/2;j++){
                printf("* ");
            }
            printf("\n");


            for(int j=1;j<=a/2;j++){
                printf(" *");
            }
            
            if(i==a){return 0;
			}
            printf("\n");
        }
    }

    return 0;
}

