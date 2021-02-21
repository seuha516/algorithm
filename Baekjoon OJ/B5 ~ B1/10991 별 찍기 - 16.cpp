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
		for(int j=1;j<=i-1;j++){
			printf("* ");
		}
		printf("*\n");
	}
	
	
	return 0;
}
