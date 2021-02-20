#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <utility>
#define ll long long
#define ull unsigned long long

using namespace std;

ll DP[1000055]; //i번 라면까지 최솟값
ll one[1000055]; 
ll two[1000055]; 

int main(){
	
	ll n,b,c; scanf("%lld %lld %lld",&n,&b,&c);
	vector<ll> v; 
	ll dap=0;
	
	ll hap=0;
	for(int i=0;i<n;i++){
		ll x; scanf("%lld",&x); v.push_back(x); hap+=x;
	}
	
	if(c>=b){
		printf("%lld",hap*b); return 0;
	}
	
	DP[0]=b*v[0]; one[0]=v[0];
	
	for(int i=1;i<n;i++){
		int now=v[i];
		DP[i]=DP[i-1];
		if(now<=one[i-1]){
			two[i]=now;
			DP[i]+=c*now;
		}else{
			two[i]=one[i-1];
			DP[i]+=c*one[i-1];
			now-=one[i-1];
			
			if(now<=two[i-1]){
				DP[i]+=c*now;
			}else{
				DP[i]+=c*two[i-1];
				now-=two[i-1];
				DP[i]+=b*now;
				one[i]=now;
			}
		
		}
	}
	
	printf("%lld",DP[n-1]);
	
	return 0;
}

