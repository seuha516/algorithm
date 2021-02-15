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
	
	int n; scanf("%d",&n);
	vector<cpx> A,B,tempB;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); A.push_back(cpx(x,0));
	}
	for(int i=0;i<n;i++){
		A.push_back(A[i]);
	}
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); tempB.push_back(cpx(x,0));
	}
	for(int i=0;i<n;i++){
		B.push_back(tempB[n-1-i]);
	}
	
	int dap=0;
	A=mul_fft(A,B);
	for(int i=B.size()-1;i<B.size()*2-1;i++){
		dap=max(dap,(int)(A[i].real()));
	}
	printf("%d",dap);
	
	return 0;
}


