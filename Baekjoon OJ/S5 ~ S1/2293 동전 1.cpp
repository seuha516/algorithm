#include <iostream>
int n,k;
int dp[10001]={0,};
int dp2[10001]={0,};
int temp;

int main(){
	dp[0]=1;
	scanf("%d %d",&n,&k);
	int val[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&val[i]);
	}
	for(int j=1;j<=n;j++){
		if(j%2==1){
			dp2[0]=1;
			for(int k=1;k<=10000;k++){
				dp2[k]=dp[k];
				temp=k-val[j];
				while(temp>=0){
					dp2[k]+=dp[temp];
					temp-=val[j];
				}
			}
		}else{
			dp[0]=1;
			for(int k=1;k<=10000;k++){
				dp[k]=dp2[k];
				temp=k-val[j];
				while(temp>=0){
					dp[k]+=dp2[temp];
					temp-=val[j];
				}
			}			
		}		
	}
	if(n%2==1){
		printf("%d",dp2[k]);
	}else{
		printf("%d",dp[k]);
	}
	
	return 0;
}
