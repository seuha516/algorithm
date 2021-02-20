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

vector<ll> sosu;
vector<ll> min_soinsoo;
int sosu_gaesoo;
void sosu_make(int N){
	min_soinsoo.assign(2,-1);
	for(int i=2;i<=N;i++) min_soinsoo.push_back(i);
	int sqrtN=(int)(sqrt(N));
	for(int i=2;i<=sqrtN;i++){
		if(min_soinsoo[i]==i){
			for(int j=i*i;j<=N;j+=i){
				if(min_soinsoo[j]==j){
					min_soinsoo[j]=i;
				}
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(min_soinsoo[i]==i) sosu.push_back(i);
	}
	sosu_gaesoo=sosu.size();
}

vector<ll> oil_pi;
long long M=1000000007;

int main(){
	
	sosu_make(1000001);
	oil_pi.push_back(0); oil_pi.push_back(0);
	for(ll i=2;i<=1000000;i++){
		ll oil_pi_i=i;
		ll I=i;
		while(I>1){
			ll soinsoo=min_soinsoo[I];
			while(I%soinsoo==0) I/=soinsoo;
			oil_pi_i=oil_pi_i/soinsoo*(soinsoo-1);
		}
		oil_pi.push_back(oil_pi_i);
	}
	
	ll n; scanf("%lld",&n);
	ll dap=0;
	
	for(ll g=1;g<=n;g++){
		for(int i=1;i<=n/g;i++){
			ll temp=((g*i%M)*i%M)*oil_pi[i]%M;
			temp=temp*500000004LL%M;
			dap+=temp;
		}
	}
	
	printf("%lld",dap%M);
	
	return 0;
}

