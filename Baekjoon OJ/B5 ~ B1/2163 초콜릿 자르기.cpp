#include <iostream>

int cutcount=0;
void cut(int m, int n);
    
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    cut(a,b);
    if(a==1&&b==1){
        printf("0");
    }else{
        printf("%d",cutcount);
    }
    
    return 0;
}

void cut(int m, int n){
    if(m!=1||n!=1){
        if(m>=n){
            if(m%2==0){
               cutcount++;
               cut(m/2,n);
               cut(m/2,n);
            }else{
                cutcount++;
                cut(m/2,n);
                cut(m/2+1,n);
            }
        }else{
            if(n%2==0){
               cutcount++;
               cut(m,n/2);
               cut(m,n/2);
            }else{
                cutcount++;
                cut(m,n/2);
                cut(m,n/2+1);
            }
        }
    }
}

