#include <iostream>
int main(){
    int a,b;
    int c=1,d=1;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        c*=(a+1-i);
        d*=(b+1-i);
    }
    printf("%d",c/d);
    
    return 0;
}
