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

vector<ull> a_list={2,325,9375,28178,450775,9780504,1795265022};
template <typename T>
T gcd(T a, T b){  
	return a%b==0? b : gcd(b,a%b);
}

ull addmod(ull x,ull y,ull mod){
	x%=mod; y%=mod; return (x>=mod-y? x-(mod-y) : x+y);
}
ull mulmod(ull x,ull y,ull mod){
	x%=mod; y%=mod; 
	ull ret=0ULL;
	while(y){
		if(y&1) ret=addmod(ret,x,mod);
		x=addmod(x,x,mod);
		y>>=1;
	}
	return ret;
}
ull powmod(ull x,ull y,ull mod){
	x%=mod;
	ull ret=1ULL;
	while(y){
		if(y&1) ret=mulmod(ret,x,mod);
		x=mulmod(x,x,mod);
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
	if(n<=10000000000ULL){
		for(unsigned long long i=2;i*i<=n;i++) if(n%i==0) return false;
		return true;
	}
	for(ull a : a_list) if(!miller_rabin(n,a)) return false;
	return true;
}
ull rho_f(ull x,ull c,ull mod){
	return addmod(mulmod(x,x,mod),c,mod);
}
ull rho(ull n,ull x0,ull c){
	ull x=x0, y=x0, ret=1;
	while(ret==1){
		x=rho_f(x,c,n);
		y=rho_f(y,c,n); y=rho_f(y,c,n);
		ret=gcd(x>y?x-y:y-x,n);
	}
	return ret;
} 
ull find_soinsoo(ull n){
	if(n==1ULL) return 1;
	if(n<=10000000000ULL){
		for(unsigned long long i=2;i*i<=n;i++) if(n%i==0) return i;
		return n;
	}
	if(is_prime(n)) return n;
	ull ret=rho(n,1,1);
	if(ret==n) ret=rho(n,1,-1);
	int temp_c=2;
	while(ret==n) ret=rho(n,1,temp_c++);
	return ret;
}
vector<ull> soinsoos; 
void soinsoo_divide(ull n){
	if(n==1) return;
	if(find_soinsoo(n)==n){
		soinsoos.push_back(n); return;
	}
	soinsoo_divide(find_soinsoo(n));
	soinsoo_divide(n/find_soinsoo(n));
	return;
}

ull m(ull a,ull b){
	if(a>b) return b;
	return a;
}
ull pow(ull a,int k){
	if(k<0)while(1);
	ull ret=1;
	while(k--)ret*=a;
	return ret;
}
vector<pair<ull,int>> soin;

bool cmp(pair<ull,int> a,pair<ull,int> b) { 
    if(a.second==b.second){
        return a.first>b.first; 
    }
    return a.second>b.second;
}

ull dap=987654321987654321;
void go(int now,ull a,ull b,ull c){
	if(now==soin.size()){
		dap=m(a+b+c,dap); return;
	}
	if(a+b+c>dap) return;
	
	ull sosu=soin[now].first; int num=soin[now].second;
	for(int i=0;i<=num;i++){
		for(int j=(now==0?i:0);i+j<=num;j++){
			int k=num-i-j;
			if(now==0 && (k<i||k<j))continue;
			go(now+1,a*pow(sosu,i),b*pow(sosu,j),c*pow(sosu,k));
		}
	}
}

int main(){
	
	while(1){
		
		soinsoos.clear(); soin.clear(); dap=987654321987654321;
		ull x; scanf("%llu",&x); 
		if(x==0ULL) break;
		if(x==1ULL){printf("3\n"); continue;}
		soinsoo_divide(x);
		sort(soinsoos.begin(),soinsoos.end());
		
		ull sosu=soinsoos[0]; int many=1;
		for(int i=1;i<soinsoos.size();i++){
			if(soinsoos[i-1]!=soinsoos[i]){
				soin.push_back({sosu,many}); many=1; sosu=soinsoos[i];
			}else{
				many++;
			}
		}
		soin.push_back({sosu,many});
		sort(soin.begin(),soin.end(),cmp);
		
		ull tt[3]={1ULL,1ULL,1ULL};
		for(int i=0;i<soinsoos.size();i++){
			ull mm=m(tt[0],m(tt[1],tt[2]));
			if(tt[0]==mm) tt[0]*=soinsoos[i];
			else if(tt[1]==mm) tt[1]*=soinsoos[i];
			else tt[2]*=soinsoos[i];
		}dap=tt[0]+tt[1]+tt[2];
		
		go(0,1ULL,1ULL,1ULL);
		
		printf("%llu\n",dap);		
		
	}
		
	return 0;
}


