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

vector<ull> a_list={2,7,61};

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
	if(n<=1000ULL){
		for(ull i=2;i*i<=n;i++) if(n%i==0) return false;
		return true;
	}
	for(ull a : a_list) if(!miller_rabin(n,a)) return false;
	return true;
}

vector<long long> soo;
ll M=-1, m=9990000000;

void go(vector<int> vec){
	int vecsize=vec.size();
	if(vecsize==1 && vec[0]>1){
		ll res=(ull)(vec[0]);
		if(is_prime(res)){
			m=min(m,res); M=max(M,res);
		}
		return;
	}
	for(int a=0;a<vecsize-1;a++){
		for(int b=a+1;b<vecsize;b++){
			vector<int> next;
			int t1,t2;
			for(int k=0;k<vecsize;k++){
				if(k==a){
					t1=vec[k];
				}else if(k==b){
					t2=vec[k];
				}else{
					next.push_back(vec[k]);
				}
			}
			next.push_back(t1+t2); go(next); next.pop_back();
			next.push_back(t1-t2); go(next); next.pop_back();
			next.push_back(t2-t1); go(next); next.pop_back();
			next.push_back(t1*t2); go(next); next.pop_back();
			if(t2!=0){
				next.push_back(t1/t2); go(next); next.pop_back();
			}
			if(t1!=0){
				next.push_back(t2/t1); go(next); next.pop_back();
			}
		}
	}
}

int main(){
	
	int n; vector<int> v; scanf("%d",&n);
	for(int i=0;i<n;i++){int x; scanf("%d",&x); v.push_back(x);}
	go(v);
	if(M!=-1)printf("%lld\n%lld",m,M);
	else printf("-1");
	
	return 0;
}

