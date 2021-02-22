#include <iostream>
int main(){
    int a[10],b[10];
    for (int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        scanf("%d",&b[i]);
    }
    int aa=0,bb=0;
    for (int i=0;i<10;i++){
        if(a[i]>b[i]){
            aa++;
        }else if(a[i]<b[i]){
            bb++;
        }
    }
    if(aa>bb){
        printf("A");
    }else if(bb>aa){
        printf("B");
    }else{
        printf("D");
    }
    
    return 0;
}
