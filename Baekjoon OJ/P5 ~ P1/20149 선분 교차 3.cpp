#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

const double PI = 2.0*acos(0.0); 

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
			vec aa=a, bb=b-a, cc=c, dd=d-c;
			double p=(cc-aa).cross(dd);
			p/=bb.cross(dd);
			ret=aa+bb*p;
		}
		return ab<=0 && cd<=0;
	}
}

int main(){
	
	int a[8];
	for(int i=0;i<8;i++) scanf("%d",&a[i]);
	
	vec ret(2000000.0,2000000.0);
	printf("%d",segline_meet(vec(a[0],a[1]),vec(a[2],a[3]),vec(a[4],a[5]),vec(a[6],a[7]),ret));
	if(ret.x<=1500000.0) printf("\n%.10lf %.10lf\n",ret.x,ret.y);
	
	return 0;
}
