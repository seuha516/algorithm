#include <iostream>
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(int i=1;i<a+1;i++){
        scanf("%d %d",&b,&c);
        printf("%d\n",2-b+c);
    }
    return 0;
}
