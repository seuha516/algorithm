#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

int main(){
	
	int n;
	int k;

	scanf("%d %d",&n,&k);
	
	unsigned long long list[40][40]={0,};
	for(int i=0;i<=39;i++){
		for (int j=0;j<=i;j++){
			if(j==0||j==i){
				list[i][j]=1;
			}else{
				list[i][j]=list[i-1][j-1]+list[i-1][j];
			}			
		}				
	}	
	printf("%llu",list[n-1][k-1]);
	
	return 0;
}
