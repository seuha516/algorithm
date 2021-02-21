#include <stdio.h>
int main()
{
    int a[7];
    int b=0;
    int c=0;
    for (int i=1;i<=8;i++){
        scanf("%d",&a[i-1]);
    }

    for (int k=1;k<=8;k++){
        if(a[k-1]==9-k){
            c++;
        }
    }

    for (int j=1;j<=8;j++){
    if(a[j-1]==j){
        b++;
        }
    }

    if(b==8){
        printf("ascending");
    }else if(c==8){
        printf("descending");
    }else{
        printf("mixed");
    }

    return 0;
}

