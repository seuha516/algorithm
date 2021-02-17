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

const double PI = acos(-1);
typedef complex<double> cpx;

void fft(vector<cpx> &a,bool inv) {
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        while (!((j^=bit)&bit)) bit>>=1;
        if(i<j) swap(a[i],a[j]);
    }
    for(int i=1;i<n;i<<=1){
        double x = inv? PI/i : -PI/i;
        cpx w={cos(x),sin(x)};
        for(int j=0;j<n;j+=i<<1){
            cpx th={1,0};
            for(int k=0;k<i;k++){
                cpx tmp=a[i+j+k]*th;
                a[i+j+k]=a[j+k]-tmp;
                a[j+k]+=tmp;
                th*=w;
            }
        }
    }
    if(inv){
        for(int i=0;i<n;i++){
            a[i]/=n;
        }
    }
}
vector<cpx> mul_fft(vector<cpx> a,vector<cpx> b){
	int n=(int)max(a.size(),b.size());
    int i=0;
    while((1<<i)<(n<<1)) i++;
    n=1<<i;
    a.resize(n); b.resize(n); vector<cpx> c(n);
    fft(a,false);
    fft(b,false);
    for(int i=0;i<n;i++){
        c[i]=a[i]*b[i];
    }
    fft(c,true);
    return c;
}


int main(){
	
	string s; cin >> s;
	vector<cpx> a, b;
	for(int i=0;i<s.size()-1;i++){
		a.push_back(cpx(0,0));
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='A') a.push_back(cpx(1,0)); 
		else a.push_back(cpx(0,0));
	}
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]=='B') b.push_back(cpx(1,0)); 
		else b.push_back(cpx(0,0));
	}
	for(int i=0;i<s.size()-1;i++){
		b.push_back(cpx(0,0));
	}
	
	vector<cpx> ans=mul_fft(a,b);
	for(int i=s.size()*2-1;i<s.size()*3-2;i++){
		printf("%d\n",(int)(round(ans[i].real())));
	}
	
	return 0;
}

