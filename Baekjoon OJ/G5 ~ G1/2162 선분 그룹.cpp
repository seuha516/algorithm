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
#define ll long long
#define ull unsigned long long

using namespace std;

const double PI = acos(-1);

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


int main(){
	
	vector<pair<vec,vec>>v;
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
		v.push_back({vec(a,b),vec(c,d)});
	}
	dj DJ(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(segline_meet(v[i].first,v[i].second,v[j].first,v[j].second)){
				DJ.merge(i,j);
			}
		}
	}
	int d1=0,d2=0;
	for(int i=0;i<n;i++){
		if(DJ.parent[i]==i){
			d1++;
			d2=max(d2,DJ.size(i));
		}
	}
	printf("%d\n%d",d1,d2);
	
	
	return 0;
}

