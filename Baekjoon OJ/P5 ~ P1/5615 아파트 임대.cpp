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

vector<ull> a_list={2,3,5,7,11};

ull powmod(ull x,ull y,ull mod){
	x%=mod;
	ull ret=1ULL;
	while(y){
		if(y&1) ret=ret*x%mod;
		x=x*x%mod;
		y>>=1;
	}
	return ret;
}

bool miller_rabin(ull n,ull a){
	ull d=n-1;
	while(!(d&1)){
		if(powmod(a,d,n)==n-1) return true;
		d>>=1;
	}
	ull temp=powmod(a,d,n);
	return temp==n-1 || temp==1;
}
bool is_prime(ull n){
	if(n<=1) return false;
	if(n<=100ULL){
		for(ull i=2;i*i<=n;i++) if(n%i==0) return false;
		return true;
	}
	for(ull a : a_list) if(!miller_rabin(n,a)) return false;
	return true;
}

int main(){
	
	int dap=0;
	int TC; scanf("%d",&TC);
	while(TC--){
		ll x; scanf("%lld",&x); if(x<4LL){dap++; continue;}
		x=2*x+1;
		if(is_prime(x)) dap++;
	}
	cout<<dap;
	
	return 0;
}

