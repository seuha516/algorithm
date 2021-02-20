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

template <typename T>
T gcd(T a, T b){  
	return a%b==0? b : gcd(b,a%b);
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	if(n>m) swap(n,m);
	if(n==m){printf("%d",n); return 0;}
	if(n==1){printf("%d",m); return 0;}
	
	// 2 <= n < m <= 10^9
	
	ll a=(ll)(n-1); ll b=(ll)(m-1); ll g=gcd(a,b);
	ll dap=a+1; a/=g; b/=g;
	ll temp=2*g*a-a+1; temp*=(b-1); temp/=2;
	printf("%lld",temp+dap);
	
	
	
	return 0;
}

