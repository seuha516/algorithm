#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		long long n,k; scanf("%lld %lld",&n,&k);
		long long dap1=0, dap2=0;
		
		vector<long long> sum; sum.push_back(0);
		long long mod[100005]={0,};
		
		for(int i=0;i<n;i++){ long long x; scanf("%lld",&x); sum.push_back(sum[i]+x); }
		for(int i=0;i<=n;i++){ sum[i]%=k; mod[sum[i]]++; }
		
		for(int i=0;i<k;i++){ 
			if(mod[i]<2) continue; 
			long long A=mod[i]; long long B=mod[i]-1;
			if(A&1)B/=2; else A/=2;
			dap1+=(A%20091101)*(B%20091101); 
			dap1%=20091101; 
		}
		
		int appear[100005]={0,};
		for(int i=0;i<=n;i++){
			if(appear[sum[i]]){
				dap2++; memset(appear,0,sizeof(appear));
			}
			appear[sum[i]]=1;			
		}
		
		printf("%lld %lld\n",dap1,dap2);
		
	}
	
	return 0;
}
