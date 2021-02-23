#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

int main(){
	
	int a,b;
	scanf("%d %d",&a,&b);
	b=b-a;
	int n;
	int k;
	
	n=b+a-1;k=a-1;
	
	unsigned long long list[50][50]={0,};
	for(int i=0;i<=49;i++){
		for (int j=0;j<=i;j++){
			if(j==0||j==i){
				list[i][j]=1;
			}else{
				list[i][j]=list[i-1][j-1]+list[i-1][j];
			}			
		}				
	}	
	printf("%llu",list[n][k]);
	
	return 0;
}
