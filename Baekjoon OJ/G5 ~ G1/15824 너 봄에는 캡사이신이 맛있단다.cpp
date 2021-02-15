#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

long long mod=1000000007;
int n;
vector<long long> v;

long long twokmod(int k){
	long long ret=1;
	long long temp=2;
	while(k){
		if(k&1) ret*=temp%mod;
		k/=2; 
		temp*=temp%mod;
		ret%=mod; temp%=mod;
	}
	return ret%mod;
}

int main(){
	
	scanf("%d",&n); 
	for(int i=0;i<n;i++){int x;scanf("%lld",&x);v.push_back(x);}
	sort(v.begin(),v.end());
	long long dap=0; long long dap2=0;
	
	for(int i=0;i<n;i++){
		dap+=( (v[n-1-i]%mod) * (twokmod(n-1-i)%mod) )%mod;
		dap2+=( (v[n-1-i]%mod) * (twokmod(i)%mod) )%mod;
		dap%=mod; dap2%=mod;
	}
	
	long long ans=dap-dap2; if(ans<0)ans+=mod; ans%=mod;
	printf("%lld",ans);
	
	return 0;
}


