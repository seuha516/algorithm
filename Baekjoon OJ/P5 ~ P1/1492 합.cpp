#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;
 
long long johap[55][55];
void johapsetting(){
	for(int i=0;i<55;i++){
		johap[i][0]=1;
		johap[i][i]=1;
	}
	for(int i=2;i<55;i++){
		for(int j=1;j<=i-1;j++){
			johap[i][j]=johap[i-1][j-1]+johap[i-1][j];
		}
	}
}

long long fermat(long long a,long long n,long long k){ //a^n을 k로 나눈 나머지 (k는 충분히 큰 소수) 
	bool ok[32]={0,};
	for(int i=0;i<32;i++){
		ok[i]=n%2; n/=2;
	}
	long long result=1; long long temp=a; 
	for(int i=0;i<32;i++){
		if(ok[i]){
			result*=temp;
			result%=k;
		}
		temp*=temp;
		temp%=k;
	}
	return result;
}

int main(){
	
	johapsetting();	
	
	long long n,k; scanf("%lld %lld",&n,&k); 
	long long mod=1000000007;
	
	long long DP[52]={0,};
	DP[0]=n;
	DP[1]=(((n*(n+1))%mod)*(fermat(2,mod-2,mod)))%mod;	
	
	long long result=0;
	for(int i=2;i<=k;i++){
		long long temp1=0; long long temp2=0;
		for(int j=0;j<i+1;j++){
			temp1+=fermat(n,i+1-j,mod)*(johap[i+1][j]%mod);
			temp1%=mod;
		}
		for(int j=0;j<i;j++){
			temp2+=DP[j]*(johap[i+1][j]%mod);
			temp2%=mod;
		}
		result=temp1-temp2;
		if(result<0){
			result+=mod;
		}
		result*=fermat(i+1,mod-2,mod);
		result%=mod;
		
		DP[i]=result;
	}
	
	printf("%lld",DP[k]);
	return 0;
	
}

