#include <stdio.h>

int main(){
    unsigned int a, b[10]={0,},aa;
    scanf("%d",&a);
    aa=a;
    for(int i=0;a!=0;i++){
        b[a%10]++;
        a=a/10;
    }
    
    b[6]=b[6]+b[9];
    b[9]=0;
    if(b[6]%2==0){
        b[6]/=2;
    }else{
        b[6]/=2;
        b[6]+=1;
    }
    
    int temp=0;
    for(int i=0;i<10;i++){
        if(b[i]>temp){
            temp=b[i];
        }
    }
    if(aa==0){
    	printf("1");
	}else{
		printf("%d",temp);
	}
    

    return 0;
}

