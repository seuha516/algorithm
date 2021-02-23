#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	
	
	int a[1500]={0,};
	a[2]=1;
	if(n<=4){
		
		if(a[n]==0){
			printf("SK");
		}else{
			printf("CY");
		}
		
	}else{
		for(int i=5;i<=n;i++){
			if(a[i-1]==0&&a[i-3]==0&&a[i-4]==0){
				a[i]=1;
			}
		}
		
		
		if(a[n]==0){
			printf("SK");
		}else{
			printf("CY");
		}
	}


	return 0;
}
