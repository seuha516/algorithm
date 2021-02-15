#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

const double PI = acos(-1); 
typedef complex<double> cpx;

// FFT 함수
void fft(vector<cpx> &f,cpx w){
	int n=f.size();
	if(n==1) return;
	vector<cpx> even(n>>1), odd(n>>1);
	for(int i=0;i<n;i++){ (i&1?odd:even)[i/2]=f[i]; }
	fft(even,w*w); fft(odd,w*w);
	cpx wp(1,0);
	for(int i=0;i<n/2;i++){
		f[i]=even[i]+wp*odd[i];
		f[i+n/2]=even[i]-wp*odd[i];
		wp*=w;
	}
}
vector<cpx> mul_fft(vector<cpx> a,vector<cpx> b){
	int n=1;
	while(n<=a.size()||n<=b.size()) n<<=1;
	n<<=1;
	a.resize(n); b.resize(n); vector<cpx> c(n);
	cpx w(cos(2*PI/n),sin(2*PI/n));
	fft(a,w); fft(b,w);
	for(int i=0;i<n;i++) c[i]=a[i]*b[i];
	fft(c,cpx(w.real(),-w.imag()));
	for(int i=0;i<n;i++){
		c[i]/=cpx(n,0);
		c[i]=cpx(round(c[i].real()),round(c[i].imag()));
	}
	return c;
}

// 100만까지의 소수 만들기 
vector<int> sosu;
vector<int> min_soinsoo;
bool Iamsosu[1000000];
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
	for(int i=3;i<=N;i++){
		if(min_soinsoo[i]==i){
			sosu.push_back(i); Iamsosu[i]=1;
		}
	}
	sosu_gaesoo=sosu.size();
}


int main(){
	
	sosu_make(1000000); //100만 이하의 소수를 vector<int> sosu에 저장 (2 제외) 
	
	vector<cpx> S(500000);
	vector<cpx> S2(500000); 
	
	for(int i=0;i<sosu_gaesoo;i++){
		S[sosu[i]/2]=cpx(1,0); 
		if(sosu[i]-1<500000) S2[sosu[i]-1]=cpx(1,0);
	}
	
	vector<cpx> V=mul_fft(S,S);
	V.erase(V.begin()+500000,V.end());
	V=mul_fft(S,V); 
	
	vector<cpx> V2=mul_fft(S,S2);

	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		int dap=(int)(V[(x/2)-1].real());    
		dap+=( (int)(V2[(x/2)-1].real()) )*3; 
		if(Iamsosu[x/3]&&x%3==0)dap+=2;      
		if(x>4){if(Iamsosu[x-4])dap+=6;}     
		printf("%d\n",dap/6);
	}

	return 0;
}


