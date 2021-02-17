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

void fft(vector<cpx> &a,bool inv){
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
            a[i]=cpx(round(a[i].real()),round(a[i].imag()));
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

void showvec(vector<cpx>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << "( " << (*(v.begin()+i)).real() << ", " << (*(v.begin()+i)).imag() << " )" << " ";
	}printf("\n");
}


int main(){
	
	long long n; scanf("%lld",&n);
	vector<cpx> v(n);
	v.push_back(cpx(0,0));
	for(long long i=1;i<n;i++){
		int x=(int)(i*i%n); 
		v[x]=cpx(v[x].real()+1.0,0);
	}
	
	vector<cpx> res=mul_fft(v,v);
	
	long long dap=0;
	for(int i=0;i<res.size();i++){
		dap+=(long long)(res[i].real())*(long long)(v[i%n].real());
	}
	for(int i=1;i<n;i++){
		long long x=(long long)i*(long long)i*2LL%n; 
		dap+=(long long)(v[x%n].real());
	}
	printf("%lld",dap/2);

	return 0;
}

