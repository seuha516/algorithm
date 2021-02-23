#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

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
double ccw(vec a, vec b){
	return a.cross(b);
}

double area(vector<vec> v){
	double ret=0;
	for(int i=0;i<v.size();i++){
		vec aa=v[i]; vec bb=v[(i+1)%v.size()];
		ret+=aa.cross(bb)/2.0;
	}
	return fabs(ret);
}

vector<vec> cut(vec st, vec end, vector<vec> land){
	vector<vec> ret;
	for(int i=0;i<land.size();i++){
		vec a=land[i]; vec b=land[(i+1)%land.size()];
		
		if(ccw(end-st,a-st)>=0){
			ret.push_back(a);
		}
		
		if(st.y==end.y){
			vec small,big;
			if(a.y<b.y){
				small=a; big=b;
			}else if(a.y>b.y){
				small=b; big=a;
			}else continue;
			if(small.y <= st.y && st.y <= big.y){
				double temp=((big.y-st.y)*small.x + (st.y-small.y)*big.x) / (big.y-small.y);
				ret.push_back(vec(temp,st.y));
			}else{
				continue;
			}
		}else{
			vec small,big;
			if(a.x<b.x){
				small=a; big=b;
			}else if(a.x>b.x){
				small=b; big=a;
			}else continue;
			if(small.x <= st.x && st.x <= big.x){
				double temp=((big.x-st.x)*small.y + (st.x-small.x)*big.y) / (big.x-small.x);
				ret.push_back(vec(st.x,temp));
			}else{
				continue;
			}
		}
		
	}
	return ret;
}


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		double x1,y1,x2,y2;
		int n;
		vector<vec> island;
		
		scanf("%lf %lf %lf %lf %d\n",&x1,&y1,&x2,&y2,&n);
		for(int i=0;i<n;i++){
			double a,b; scanf("%lf %lf",&a,&b); island.push_back(vec(a,b));
		}
		
		vec t1(x1,y1);
		vec t2(x2,y1);
		vec t3(x2,y2);
		vec t4(x1,y2);
		
		island=cut(t1,t2,island);
		island=cut(t2,t3,island);
		island=cut(t3,t4,island);
		island=cut(t4,t1,island);
		
		printf("%.10lf\n",area(island));
		
	}
	
	return 0;
}
