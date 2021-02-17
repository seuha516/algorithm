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

using namespace std;

template <typename T>
T gcd(T a, T b){  
	return a%b==0? b : gcd(b,a%b);
}
template <typename T>
void eea(T a, T b, T &ret1, T &ret2){
	T A=a, B=b;
	T s_0=1, t_0=0, s_1=0, t_1=1;
	while(1){
		if(a%b==0) break;
		T temp_0=s_0-(s_1*(a/b)), temp_1=t_0-(t_1*(a/b));
		T temp=a%b;
		a=b; b=temp;
		s_0=s_1; t_0=t_1; s_1=temp_0; t_1=temp_1;
	}
	ret1=s_1; ret2=t_1;
	//cout << s_1 << " * " << A << " + " << t_1 << " * " << B << " = " << b << "\n";
}
template <typename T>
T mod_inv(T x, T mod){
	if(gcd(x,mod)!=1) return -1; //모듈러 역원이 없다 
	T ret1, ret2;
	eea(x,mod,ret1,ret2);
	if(ret1<0) ret1+=mod;
	return ret1;
}

long long Pow(long long a, long long k, long long mod){
	long long ret=1;
	while(k){
		if(k&1){
			ret*=a; ret%=mod;
		}
		k>>=1; a*=a; a%=mod;
	}
	return ret%mod;
} 
void ntt(vector<long long> &a,bool inv,long long mod,long long w){
    long long i,j,k,x,y,z;
    int n=a.size();
    j=0;
    for(i=1;i<n;i++){
        int bit=n>>1;
        while(!((j^=bit)&bit)) bit>>=1;
        if (i<j) swap(a[i],a[j]);
    }
    for(i=1;i<n;i<<=1){
        x=Pow(inv ? Pow(w,mod-2,mod):w, mod/i>>1, mod);
        for(j=0;j<n;j+=i<<1){
            y=1;
            for(k=0;k<i;k++){
                z=a[i|j|k]*y%mod;
                a[i|j|k]=a[j|k]-z;
                if(a[i|j|k]<0) a[i|j|k]+=mod;
                a[j|k]+=z;
                if(a[j|k]>=mod) a[j|k]-=mod;
                y=y*x%mod;
            }
        }
    }
    if(inv){
    	j=Pow(n,mod-2,mod);
    	for(i=0;i<n;i++) a[i]=a[i]*j%mod;
    }
}
vector<long long> mul_ntt(vector<long long> a,vector<long long> b,long long mod,long long w){
	int n=2;
    while(n<a.size()+b.size()) n<<=1;
    a.resize(n); b.resize(n); vector<long long> c(n);
    ntt(a,false,mod,w);
    ntt(b,false,mod,w);
    for(int i=0;i<n;i++){
        c[i]=a[i]*b[i]%mod;
    }
    ntt(c,true,mod,w);
    return c;
}

long long nanoogi(long long a,long long b,long long mod){
	long long ret=0;
	while(b){
		if(b&1){
			ret=(ret+a)%mod;
		}
		b>>=1; a<<=1; a%=mod;
	}
	return ret%mod;
}

int main(){
	
	long long n,m; scanf("%lld %lld",&n,&m);
	vector<long long> N,M;
	for(int i=0;i<n+1;i++){long long x; scanf("%lld",&x); N.push_back(x);}
	for(int i=0;i<m+1;i++){long long x; scanf("%lld",&x); M.push_back(x);}
	
	vector<long long> res1=mul_ntt(N,M,998244353LL,3);
	vector<long long> res2=mul_ntt(N,M,1012924417LL,5);
	long long dap=0;
	
	for(int i=0;i<N.size()+M.size()-1;i++){
		long long modulo1=res1[i]; long long modulo2=res2[i];
		long long result=nanoogi(68878860357LL,modulo2,1011146079286067201LL);
		result+=nanoogi(1011146010407206845LL,modulo1,1011146079286067201LL);
		result%=1011146079286067201LL;
		dap^=result;
	}
	printf("%lld",dap);
	
	return 0;
}


