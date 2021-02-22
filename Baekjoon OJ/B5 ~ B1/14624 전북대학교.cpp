#include <iostream>
#include <stack>
#include <cstring>
#include <queue>

using namespace std;
 

int main(){
	int a;scanf("%d",&a);
	if(a%2==0){
		printf("I LOVE CBNU");
	}else{
		for(int i=1;i<=a;i++){
			printf("*");
		}
		printf("\n");
		for(int i=1;i<=(a+1)/2;i++){
			for(int j=1;j<=(a+1)/2-i;j++){
				printf(" ");
			}
			printf("*");
			if(i!=1){
				for(int y=1;y<=2*i-3;y++){
					printf(" ");
				}
				printf("*");
			}
			printf("\n");
		}
		
	}
	
	
	return 0;
}

