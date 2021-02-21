#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(){

    int a;
    int b[1005]={0,};
    int d[1005]={0,};
    int c[1005]={0,};
    int cd[1005]={0,};
    int dap=0;
    int temp=0;
    int dd;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
        d[a-i+1]=b[i];
    }

    for(int i=1;i<=a;i++){
        for(int j=0;j<i;j++){
            if(b[j]<b[i]){
                c[i]=max(c[i],c[j]+1);
            }
        }
    }
    for(int i=1;i<=a;i++){
        for(int j=0;j<i;j++){
            if(d[j]<d[i]){
                cd[i]=max(cd[i],cd[j]+1);
            }
        }
    }

    for(int i=1;i<=a;i++){
        temp=max(temp,c[i]+cd[a-i+1]);
    }
    printf("%d",temp-1);

    return 0;
}

