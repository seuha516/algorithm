#include <iostream>


int main() {
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		printf(" ");
	}
	printf("*\n");
	for(int i=2;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=2*i-3;j++){
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=1;i<=2*n-1;i++){
		if(n!=1){
			printf("*");
		}
		
	}
	
	return 0;
}
