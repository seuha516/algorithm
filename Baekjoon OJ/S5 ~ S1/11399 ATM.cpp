#include <iostream>
#include <algorithm>

int main(){
    int a;
    int b[1005];
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b[i]);
    }
    std::sort(b+1,b+a+1);
    int t=0;
    for(int i=1;i<=a-1;i++){
        b[i+1]+=b[i];
    }
    for(int i=1;i<=a;i++){
        t+=b[i];
    }
    printf("%d",t);
    return 0;
}
