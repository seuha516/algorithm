#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <set>
#include <utility>
#define ll long long
#define ull unsigned long long

using namespace std;

ll gcd(ll a, ll b){  
	return a%b==0? b : gcd(b,a%b);
}
ll eea(ll a, ll b){
	ll A=a, B=b;
	ll s_0=1, t_0=0, s_1=0, t_1=1;
	while(1){
		if(a%b==0) break;
		ll temp_0=s_0-(s_1*(a/b)), temp_1=t_0-(t_1*(a/b));
		ll temp=a%b;
		a=b; b=temp;
		s_0=s_1; t_0=t_1; s_1=temp_0; t_1=temp_1;
	}
	return s_1;
}
ll mod_inv(ll x, ll mod){
	if(gcd(x,mod)!=1) return -1; //모듈러 역원이 없다 
	ll ret=eea(x,mod);	
	if(ret<0) ret+=mod;
	return ret;
}


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		ll a,b; scanf("%lld %lld",&a,&b);
		ll dap;
		if(b==1) dap=a+1;
		else if(a==1) dap=b;
		else dap=mod_inv(b,a);
		
		if(dap<=0||dap>1000000000) printf("IMPOSSIBLE\n");
		else printf("%lld\n",dap);
	}	
	
	return 0;
}

