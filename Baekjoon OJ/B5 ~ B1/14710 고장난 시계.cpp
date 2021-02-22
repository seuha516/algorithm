#include <iostream>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b%12!=0){
        printf("X");
    }else{
        b/=12;
        a-=b;
        if(a%30==0){
            printf("O");
        }else{
            printf("X");
        }
    }
    
    return 0;
}
