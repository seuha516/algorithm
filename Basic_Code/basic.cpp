#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>

using namespace std;


const double PI = acos(-1);
typedef complex<double> cpx;

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};
int x_8[8]={-1,-1,-1,0,0,1,1,1}; int y_8[8]={-1,0,1,-1,1,-1,0,1};
int kx_8[8]={-2,-2,-1,-1,1,1,2,2}; int ky_8[8]={1,-1,2,-2,2,-2,1,-1};


template <typename T>
void showvec(vector<T>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << *(v.begin()+i) << " ";
	}printf("\n");
}
template <typename T>
void showvec(vector<pair<T, T> >& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << "( " << (*(v.begin()+i)).first << ", " << (*(v.begin()+i)).second << " )" << " ";
	}printf("\n");
}
void showvec(vector<cpx>& v){
	printf("\n< vector >\n");
	for(int i=0;i<v.size();i++){
		cout << "( " << (*(v.begin()+i)).real() << ", " << (*(v.begin()+i)).imag() << " )" << " ";
	}printf("\n");
}
template <typename T>
void showarr(T arr[],int n){  
	printf("\n< array >\n");
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}printf("\n");
}
template <typename T>
void showarr_2(T(*arr)[999],int a,int b){  
	printf("\n< array >\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout << arr[i][j] << " ";
		}printf("\n");
	}printf("\n");
}


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
template <typename T>
T crt(const vector<T>gap, const vector<T>mod){
	T ret=0;
	T modgop=1; for(int i=0;i<mod.size();i++)modgop*=mod[i];
	for(int i=0;i<gap.size();i++){
		T a=modgop/mod[i];
		T modinv=mod_inv(a,mod[i]);
		ret+=gap[i]*modinv*a;
	}
	return ret%modgop;
}


template <typename T>
T jari(T x){ 
	int ret=0;
	while(x){
		x/=10; ret++;
	}
	return ret;
}
int intpow(int x,int y){   
	int ret=1;
	for(int i=0;i<y;i++){
		ret*=x;
	}
	return ret;
}
long long llpow(long long x,long long y){  
	long long ret=1;
	for(int i=0;i<y;i++){
		ret*=x;
	}
	return ret;
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


typedef struct Disjointset{
	
	vector<int> parent, rank, num;
	
	Disjointset(int n): parent(n), rank(n,1), num(n,1){
		 for(int i=0;i<n;i++) parent[i]=i;
	}
	
	int find(int x){
		if(x==parent[x]) return x;
		return parent[x]=find(parent[x]);
	}
	
	void merge(int a,int b){
		a=find(a); b=find(b);
		if(a==b) return;
		if(rank[a]>rank[b]) swap(a,b);
		parent[a]=b;
		num[b]+=num[a];
		if(rank[a]==rank[b]) ++rank[b];
	}
	
	bool same(int a,int b){
		return find(a)==find(b);
	}
	
	int size(int a){
		return num[find(a)];
	}
	
}dj;


typedef struct Vector{
	double x,y;
	explicit Vector(double x_=0, double y_=0): x(x_), y(y_){}
	bool operator == (const Vector &a) const{
		return x==a.x && y==a.y;
	}
	bool operator < (const Vector &a) const{ 
		return x!=a.x? x<a.x : y<a.y;
	}
	Vector operator + (const Vector &a) const{
		return Vector(x+a.x,y+a.y);
	}
	Vector operator - (const Vector &a) const{
		return Vector(x-a.x,y-a.y);
	}
	Vector operator * (double a) const{
		return Vector(x*a,y*a);
	}
	double length() const {return hypot(x,y);}
	Vector normalize() const{return Vector(x/length(),y/length());}
	double angle() const {return fmod(atan2(y,x)+2*PI,2*PI);}
	double dot(const Vector &a) const{return x*a.x+y*a.y;}
	double cross(const Vector &a) const{return x*a.y-y*a.x;}
	Vector shadow(const Vector &a) const{
		Vector r=a.normalize();
		return r*r.dot(*this);
	}	
}vec;
double ccw(vec a, vec b, vec c){
	return (b-a).cross(c-a);
}
bool segline_meet(vec a, vec b, vec c, vec d){
	double ab=ccw(a,b,c)*ccw(a,b,d);
	double cd=ccw(c,d,a)*ccw(c,d,b);
	if(ab==0 && cd==0){
		if(ccw(a,b,c)==0 && ccw(a,b,d)==0){
			if(b<a) swap(a,b);
			if(d<c) swap(c,d);
			return !(b<c || d<a);
		}else{
			return 1;
		}
	}else{
		return ab<=0 && cd<=0;
	}
}
bool segline_meet(vec a, vec b, vec c, vec d, vec &ret){
	double ab=ccw(a,b,c)*ccw(a,b,d);
	double cd=ccw(c,d,a)*ccw(c,d,b);
	if(ab==0 && cd==0){
		if(ccw(a,b,c)==0 && ccw(a,b,d)==0){
			if(b<a) swap(a,b);
			if(d<c) swap(c,d);
			if(b==c) ret=b; else if(d==a) ret=d; 
			return !(b<c || d<a);
		}else{
			if(a==c || a==d) ret=a; else ret=b;
			return 1;
		}
	}else{
		if(ab<=0&&cd<=0){
			double p=(c-a).cross(d-c);
			p/=(b-a).cross(d-c);
			ret=a+(b-a)*p;
		}
		return ab<=0 && cd<=0;
	}
}
bool isinside(vec p, vector<vec> v){
	int meet=0;
	for(int i=0;i<v.size();i++){
		vec a=v[i]; vec b=v[(i+1)%v.size()];
		if((a.y>p.y) != (b.y>p.y)){
			double x;
			x=v[i].x + ( (v[(i+1)%v.size()].x-v[i].x)*(p.y-v[i].y) / (v[(i+1)%v.size()].y-v[i].y) );
			if(x>p.x) meet++;
		}
		
	}
	return meet%2 > 0;
}


vector<int> kmp(const string &H,const string &N){
	int Hsize=H.size(), Nsize=N.size();

	vector<int> pi(Nsize,0);
	int begin=1, mat=0;
	while(begin+mat<Nsize){
		if(N[begin+mat]==N[mat]){
			mat++;
			pi[begin+mat-1]=mat;
		}else{
			if(mat==0) begin++;
			else{
				begin+=mat-pi[mat-1];
				mat=pi[mat-1];
			}
		}
	}
	
	vector<int> ret;
	int st=0, already_match=0;
	while(st<=Hsize-Nsize){
		int matched=already_match;		
		for(int i=already_match;i<Nsize;i++){
			if(H[st+i]!=N[i]) break;
			matched++;
		}
		if(matched==Nsize) ret.push_back(st);
		if(matched==0) st++;
		else{
			st+=matched-pi[matched-1];
			already_match=pi[matched-1];			
		}	
	}
	
	return ret;
}
int str_overlap(const string &H,const string &N){
	int Hsize=H.size(), Nsize=N.size();
	vector<int> pi(Nsize,0); 
	int begin=1, mat=0;
	while(begin+mat<Nsize){
		if(N[begin+mat]==N[mat]){
			mat++;
			pi[begin+mat-1]=mat;
		}else{
			if(mat==0) begin++;
			else{
				begin+=mat-pi[mat-1];
				mat=pi[mat-1];
			}
		}
	}
	int X=0;
	int st=0, matched=0;
	while(st<Hsize){
		if(matched<Nsize && H[st+matched]==N[matched]){
			matched++;
			if(st+matched==Hsize) return matched;
		}else{
			if(matched==0) st++;
			else{
				st+=matched-pi[matched-1];
				matched=pi[matched-1];
			}
		}
	}
	return 0;
}
struct Comparator{
	const vector<int> &group;
	int t;
	Comparator(const vector<int> &_group,int _t): group(_group), t(_t){}
	bool operator () (int a,int b){
		if(group[a]!=group[b]) return group[a]<group[b];
		return group[a+t]<group[b+t];
	}
};
vector<int> suffix_array(const string &s){
	int n=s.size();
	int t=1;
	vector<int> group(n+1);
	for(int i=0;i<n;i++) group[i]=s[i];
	group[n]=-1;
	vector<int> ret(n);
	for(int i=0;i<n;i++) ret[i]=i;
	while(t<n){
		Comparator cp(group,t);
		sort(ret.begin(),ret.end(),cp);
		t*=2;
		if(t>=n)break;
		vector<int> newgroup(n+1);
		newgroup[n]=-1;
		newgroup[ret[0]]=0;
		for(int i=1;i<n;i++){
			if(cp(ret[i-1],ret[i])) newgroup[ret[i]]=newgroup[ret[i-1]]+1;
			else newgroup[ret[i]]=newgroup[ret[i-1]];
		}
		group=newgroup;
	}
	return ret;
}
vector<int> lcp(const string &s,const vector<int> &sa){
	vector<int> pos(s.size());
	vector<int> ret(s.size());
	for(int i=0;i<s.size();i++){
		pos[sa[i]]=i;
	}
	for(int i=0,k=0;i<sa.size();i++,k=max(k-1,0)){
		if(pos[i]==0) continue;
		for(int j=sa[pos[i]-1];s[i+k]==s[j+k];k++);
		ret[pos[i]]=k;
	}
	return ret;
}





int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		
		
	}
	
	return 0;
}




















