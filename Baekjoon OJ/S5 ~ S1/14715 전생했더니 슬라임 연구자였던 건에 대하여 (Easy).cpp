#include <iostream>
int main(){
    int a;
    int soinsu=0;
    int sis[250]={0,};
    int sosu[1050]={0,};
    scanf("%d",&a);
    
    int count=0;
    for(int i=2;i<=32;i++){
        count=i;
        if(sosu[i]==0){
            while(count<=1002){
                count=count+i;
                sosu[count]=1;
            }
        }
    }
    count=1;
    for(int j=2;j<=1001;j++){
        if(sosu[j]==0){
            sis[count]=j;
            count++;
        }
    }
    for(int k=1;sis[k]!=0;k++){
        while(a%sis[k]==0){
            a/=sis[k];
            soinsu++;

        }
        if(a==1){
            break;
        }
    }
    if(a!=1){
        soinsu++;
    }

    int dap=0;
    int twoc=1;
    while(1){
        if(soinsu<=twoc){
            break;
        }else{
            dap++;
            twoc*=2;
        }
    }
    printf("%d",dap);
    
    return 0;
}
