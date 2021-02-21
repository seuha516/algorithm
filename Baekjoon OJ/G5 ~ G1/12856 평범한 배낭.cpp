#include <iostream>

int max(int a, int b){
	if (a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int dp[n+1][k+1]; //n번째까지 탐색했다. 무게 k일 때 가치의 최대 
	for(int aa=0;aa<=n;aa++){
		dp[aa][0]=0;
	}
	for(int aaa=0;aaa<=k;aaa++){
		dp[0][aaa]=0;
	}
	int w[102]={0,},v[102]={0,};
	
	
	for(int a=1;a<=n;a++){
		scanf("%d %d",&w[a],&v[a]);
	}
	int freew;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(w[i]<=j){
				freew=j-w[i];
				dp[i][j]=max(dp[i-1][j],dp[i-1][freew]+v[i]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	printf("%d",dp[n][k]);
	
	return 0;
}
