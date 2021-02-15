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
		cout << "( " << (*(v.begin()+i)).real() << ", " << (*(v.begin()+i)).imag() << " )" << " ";
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

int main(){
	
	int dap=0;
	
	int n; scanf("%d",&n);
	vector<cpx> N;
	for(int i=0;i<200005;i++) N.push_back(cpx(0,0));
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); 
		N[x]=cpx(1,0);
	}
	
	vector<cpx> N2;
	N2=mul_fft(N,N);	
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x; scanf("%d",&x); 
		if(N2[x].real()>1e-7 || N[x].real()>1e-7) dap++;
	}
	printf("%d",dap);	
	
	return 0;
}

