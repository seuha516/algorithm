#include <iostream>
#include <math.h>
#include <algorithm>
#include <stack>

int main(){
	int n;
	int k;
	scanf("%d %d",&n,&k);
	
	int list[1001][1001]={0,};
	for(int i=0;i<=1000;i++){
		for (int j=0;j<=i;j++){
			if(j==0||j==i){
				list[i][j]=1;
			}else{
				list[i][j]=list[i-1][j-1]%10007+list[i-1][j]%10007;
			}
		}
	}
	
	printf("%d",list[n][k]%10007);
	
	return 0;
}
