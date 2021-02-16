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
			sosu.push_back(i);
			Iamsosu[i]=1;
		}
	}
	sosu_gaesoo=sosu.size();
}

const double PI = acos(-1);
typedef complex<double> cpx;
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
vector<cpx> mul_fft(vector<cpx> a){
	int n=1;
	while(n<=a.size()) n<<=1;
	n<<=1;
	a.resize(n); vector<cpx> c(n);
	cpx w(cos(2*PI/n),sin(2*PI/n));
	fft(a,w);
	for(int i=0;i<n;i++) c[i]=a[i]*a[i];
	fft(c,cpx(w.real(),-w.imag()));
	for(int i=0;i<n;i++){
		c[i]/=cpx(n,0);
		c[i]=cpx(round(c[i].real()),round(c[i].imag()));
	}
	return c;
}


vector<cpx> V(500000);

int main(){
	
	sosu_make(1000000);
	for(int i=0;i<sosu_gaesoo;i++){
		V[sosu[i]/2]=cpx(1,0);
	}
	vector<cpx> V2=mul_fft(V);
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		if(x==4) printf("1\n"); 
		else{
			int dap=(int)(V2[x/2-1].real());
			printf("%d\n",dap/2+(Iamsosu[x/2]?1:0));
		}	
	}
	
	return 0;
}

