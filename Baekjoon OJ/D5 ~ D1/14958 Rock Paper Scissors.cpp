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

const double PI = acos(-1);
typedef complex<double> cpx; //º¹¼Ò¼ö 

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
	
	int asize,bsize; string a,tempb,b;
	scanf("%d %d",&asize,&bsize); cin >> a >> tempb;
	for(int i=0;i<bsize;i++) b+=tempb[bsize-1-i];
	
	int dap=-1;
	
	vector<cpx> my[3];
	for(int i=0;i<bsize;i++){
		if(b[i]=='R'){
			my[0].push_back(cpx(1,0)); my[1].push_back(cpx(0,0)); my[2].push_back(cpx(0,0));
		}else if(b[i]=='S'){
			my[0].push_back(cpx(0,0)); my[1].push_back(cpx(1,0)); my[2].push_back(cpx(0,0));
		}else{
			my[0].push_back(cpx(0,0)); my[1].push_back(cpx(0,0)); my[2].push_back(cpx(1,0));
		}
	}
	vector<cpx> rps[3];
	for(int i=0;i<asize;i++){
		if(a[i]=='R'){
			rps[0].push_back(cpx(0,0)); rps[1].push_back(cpx(0,0)); rps[2].push_back(cpx(1,0));
		}else if(a[i]=='S'){
			rps[0].push_back(cpx(1,0)); rps[1].push_back(cpx(0,0)); rps[2].push_back(cpx(0,0));
		}else{
			rps[0].push_back(cpx(0,0)); rps[1].push_back(cpx(1,0)); rps[2].push_back(cpx(0,0));
		}
	}
	vector<cpx> res[3];
	for(int i=0;i<3;i++){
		res[i]=mul_fft(my[i],rps[i]);		
	}
	for(int i=bsize-1;i<asize+bsize-1;i++){
		int temp=(int)(res[0][i].real()+res[1][i].real()+res[2][i].real());
		dap=max(dap,temp);
	}
	
	cout<<dap;
	
	return 0;
}

