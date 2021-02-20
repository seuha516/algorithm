#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
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

vector<ll> possible_px;
void go(ll x,ll mul){
	if(mul==-1){
		possible_px.push_back(x); return;
	}	
	ll nextmul;
	if(mul==2) nextmul=3; else if(mul==3) nextmul=5; else if(mul==5) nextmul=7; else nextmul=-1;
	while(1){
		go(x,nextmul);
		if(x<=1000000000/mul) x*=mul;
		else break;
	}
}
int nth(ll gop){
	return lower_bound(possible_px.begin(),possible_px.end(),gop)-possible_px.begin();
}
int jari(ll x){ 
	int ret=0;
	while(x){
		x/=10; ret++;
	}
	return ret;
}

ll cache[19][6000];
ll howmany(int len,ll gop){ //길이 len인 수 중 자기곱이 gop인 것의 수 
	ll &ret=cache[len][nth(gop)];
	if(ret!=-1) return ret;
	ret=0;
	if(len==0){
		if(gop==1) return ret=1;
		else return ret=0;
	}else if(len==1){
		if(gop>=1 && gop<=9) return ret=1;
		else return ret=0;
	}else{
		for(ll i=1;i<=9;i++){
			if(gop%i!=0) continue;
			ret+=howmany(len-1,gop/i);
		}
		return ret;
	}
}

ll A,B,target,dap; //A~B 중 자기곱이 target인 것의 수 
int jari_B;

ll gogo(ll front,int len,ll mok){
	
	ll m=front, M=front;
	ll ret=0;
	
	for(int i=0;i<len;i++){m*=10; m+=0; M*=10; M+=9;} 
	
	if(A<=m && M<=B) ret=howmany(len,mok);
	else if(M<A||m>B) return 0;
	else{
		for(ll i=0;i<=9;i++){
			ll divide=i; if(divide==0) divide=1;
			if(front!=0 && i==0) continue;
			if(mok%divide!=0) continue;
			ret+=gogo(front*10+i,len-1,mok/divide);
		}
	}
	
	return ret;
}


int main(){
	
	go(1,2); sort(possible_px.begin(),possible_px.end());
	memset(cache,-1,sizeof(cache));
	
	ll a,b; scanf("%lld %lld",&a,&b);
	
	for(int i=0;i<possible_px.size();i++){
		target=possible_px[i];
		A=a/target+(a%target==0?0:1); B=b/target; jari_B=jari(B);
		if(A<=B) dap+=gogo(0,jari_B,target);
	}
	printf("%lld",dap);
	
	return 0;
}

