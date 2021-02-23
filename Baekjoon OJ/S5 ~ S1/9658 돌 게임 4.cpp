#include <iostream>

int main() {
	int n;
	scanf("%d",&n);
	int a[2000]={0,};
	a[1]=1;
	a[3]=1;
	
	for(int i=5;i<=1050;i++){
		if(a[i-1]!=1&&a[i-3]!=1&&a[i-4]!=1){
			a[i]=1;
		}
	}
	
	if(n<=4){
		if(n%2==0){
			printf("SK");
		}else{
			printf("CY");
		}
		
	}else{
		if(a[n]==1){
			printf("CY");
		}else{
			printf("SK");
		}
		
	}
	
	
	return 0;
}
