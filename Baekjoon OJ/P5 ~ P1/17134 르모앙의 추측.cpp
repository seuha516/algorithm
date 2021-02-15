#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#include <complex>

using namespace std;

const double PI = acos(-1); 
typedef complex<double> cpx;

void showvec(vector<cpx>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		printf("vec[%d] = ",i);
		cout << "( " << (*(v.begin()+i)).real() << ", " << (*(v.begin()+i)).imag() << " )" << " \n";
	}printf("\n");
}

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

vector<int> sosu;
vector<int> min_soinsoo;
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

int main(){
	
	sosu_make(1000005);
	vector<cpx> A,B;
	for(int i=0;i<1000005;i++){
		A.push_back(cpx(0,0)); B.push_back(cpx(0,0));
	}
	
	for(int i=0;i<sosu_gaesoo;i++){
		int x=sosu[i];
		if(x&1){
			A[x]=cpx(1,0);
		}
		if(2*x<1000005){
			B[2*x]=cpx(1,0); 
		} 
	}
	vector<cpx> AB = mul_fft(A,B);
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int X; scanf("%d",&X); printf("%d\n",(int)(AB[X].real()));
	}

	return 0;
}


