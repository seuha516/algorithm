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
void eea(ll a, ll b, ll &ret1, ll &ret2){
	ll A=a, B=b;
	ll s_0=1, t_0=0, s_1=0, t_1=1;
	while(1){
		if(a%b==0) break;
		ll temp_0=s_0-(s_1*(a/b)), temp_1=t_0-(t_1*(a/b));
		ll temp=a%b;
		a=b; b=temp;
		s_0=s_1; t_0=t_1; s_1=temp_0; t_1=temp_1;
	}
	ret1=s_1; ret2=t_1;
	//cout << s_1 << " * " << A << " + " << t_1 << " * " << B << " = " << b << "\n";
}
ll mod_inv(ll x, ll mod){
	if(gcd(x,mod)!=1) return -1; //모듈러 역원이 없다 
	ll ret1, ret2;
	eea(x,mod,ret1,ret2);
	if(ret1<0) ret1+=mod;
	return ret1;
}


int main(){
	
	ll x,y; scanf("%lld %lld",&x,&y);
	printf("%lld %lld",x-y,mod_inv(y,x));
	
	return 0;
}

