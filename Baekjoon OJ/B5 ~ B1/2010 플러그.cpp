#include <iostream>
int main(){
    int a,hap=0,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        hap+=b;
    }
    printf("%d",hap-a+1);
    return 0;
}
