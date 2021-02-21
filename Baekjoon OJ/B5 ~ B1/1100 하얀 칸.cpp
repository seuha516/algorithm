#include <iostream>

int main(){
    char a[8][8];
    for(int i=0;i<8;i++){
        scanf("%s",a[i]);
    }
    int c=0;
    int d=1;
    for(int j=0;j<8;j++){
        for(int k=0;k<8;k++){
            if(d==1&&a[j][k]=='F'){
                c++;
            }
            d*=(-1);
            
        }
        d*=(-1);
    }
    
    printf("%d",c);
    
    return 0;
}
