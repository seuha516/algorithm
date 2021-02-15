#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>
#include <stack>

using namespace std;

const double PI = 2.0*acos(0.0); 
typedef struct Vector{
	double x,y;
	explicit Vector(double x_=0, double y_=0): x(x_), y(y_){}
	bool operator == (const Vector &a) const{
		return x==a.x && y==a.y;
	}
	bool operator < (const Vector &a) const{ 
		return y!=a.y? y<a.y : x<a.x;
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

vector<vec> v;

bool compare(vec a,vec b){
	if(ccw(v[0],a,b)<0){
		return 0;
	}else if(ccw(v[0],a,b)>0){
		return 1;
	}else{
		return (a-v[0]).length() < (b-v[0]).length();
	}
}

int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		double x,y; scanf("%lf %lf",&x,&y);
		v.push_back(vec(x,y));
	}
	sort(v.begin(),v.end());
	sort(v.begin()+1,v.end(),compare);
	v.push_back(v[0]);
	
	stack<vec> s;
	s.push(v[0]); s.push(v[1]);
	
	for(int i=2;i<v.size();i++){
		while(1){
			vec n=s.top(); s.pop();
			vec p=s.top(); s.push(n);
			if(ccw(p,n,v[i])<=0){
				s.pop();
			}else{
				break;
			}
			if(s.size()==1) break;
		}
		s.push(v[i]);
	}
	
	if(s.top()==v[0]) s.pop();
	printf("%d\n",s.size());
	
	return 0;
}
