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

ll DP[1000005]; //i번 라면까지 최솟값
ll one[1000005]; 
ll two[1000005]; 

int main(){
	
	int n; scanf("%d",&n);
	vector<ll> v; 
	ll dap=0;
	
	for(int i=0;i<n;i++){
		ll x; scanf("%lld",&x); v.push_back(x);
	}
	
	DP[0]=3*v[0]; one[0]=v[0];
	
	for(int i=1;i<n;i++){
		int now=v[i];
		DP[i]=DP[i-1];
		if(now<=one[i-1]){
			two[i]=now;
			DP[i]+=2*now;
		}else{
			two[i]=one[i-1];
			DP[i]+=2*one[i-1];
			now-=one[i-1];
			
			if(now<=two[i-1]){
				DP[i]+=2*now;
			}else{
				DP[i]+=2*two[i-1];
				now-=two[i-1];
				DP[i]+=3*now;
				one[i]=now;
			}
		
		}
	}
	
	printf("%d",DP[n-1]);
	
	return 0;
}

