#include <iostream>

using namespace std;

int main(){
	
    int tt;
	int a[505]={0,};
	int b[505]={0,};
    int temp=2147483647;   
    scanf("%d",&tt);
    int c[505][505]={0,};
    for(int i=1;i<=tt;i++){
    	 scanf("%d %d",&a[i],&b[i]);
	}
	if(tt==1){
		printf("0");
	}else if(tt==2){
		printf("%d",a[1]*b[1]*b[2]);
	}else{
		for(int j=1;j<=tt-1;j++){
			for(int y=1;y<=tt-j;y++){
				temp=2147483647;
				for(int g=y;g<=y+j-1;g++){
					temp=min(temp,c[y][g]+c[g+1][y+j]+a[y]*b[g]*b[y+j]);
					c[y][y+j]=temp;
				}
			}
		}
		printf("%d",c[1][tt]);
		
	}
    
    return 0;
}
