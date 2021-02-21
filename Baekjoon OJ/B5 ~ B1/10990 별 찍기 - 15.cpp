#include <iostream>


int main() {
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		printf(" ");
	}
	printf("*\n");
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=2*i-3;j++){
			printf(" ");
		}
		printf("*\n");
	}
	
	
	return 0;
}
