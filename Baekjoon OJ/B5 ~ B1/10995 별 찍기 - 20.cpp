#include <iostream>


int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1){
			for(int j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");
		}else{
			for(int j=1;j<=n;j++){
				printf(" *");
			}
			printf("\n");
		}
	}

	
	return 0;
}
