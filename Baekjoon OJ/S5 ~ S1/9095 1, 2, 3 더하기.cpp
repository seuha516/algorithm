#include <iostream>

int main(){
    int a,c;
    scanf("%d",&a);
    int b[12]={0,};
    b[1]=1;
    b[2]=2;
    b[3]=4;
    for(int i=4;i<11;i++){
        b[i]=b[i-3]+b[i-2]+b[i-1];
    }
    for(int i=1;i<=a;i++){
        scanf("%d",&c);
        printf("%d\n",b[c]);
    }
  
}
