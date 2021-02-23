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

int n;
vector<vec> nerd;
vector<vec> nonerd;


vector<vec> convex(vector<vec> point){
	
	vector<vec> ret;
	
	vec start=*min_element(point.begin(),point.end());
	ret.push_back(start);
	
	while(1){
		vec st=ret.back();  vec next=point[0];
		for(int i=1;i<point.size();i++){
			if(ccw(st,next,point[i])>0){
				next=point[i];
			}else if(ccw(st,next,point[i])==0){
				if((next-st).length() < (point[i]-st).length()){
					next=point[i];
				}
			}
		}
		if(next==start) break;
		ret.push_back(next);	
	}	
	
	return ret;
}

int main(){
	
   int TC; scanf("%d",&TC);
   while(TC--){
      
      nerd.clear(); nonerd.clear();
      
      
      scanf("%d",&n);
      for(int i=0;i<n;i++){
         double a,b,c; scanf("%lf %lf %lf",&a,&b,&c);
         if(a==1){
            nerd.push_back(vec(b,c));
         }else{
            nonerd.push_back(vec(b,c));
         }
      }
      
      vector<vec> con1, con2;
      con1=convex(nerd); con2=convex(nonerd);
      
      bool meet=0;
      
      if(isinside(con1[0],con2) || isinside(con2[0],con1)) meet=1;
      
      for(int i=0;i<con1.size();i++){
         for(int j=0;j<con2.size();j++){
            if(segline_meet(con1[i],con1[(i+1)%con1.size()],con2[j],con2[(j+1)%con2.size()])) meet=1;
         }
      }
      
      if(meet){
         printf("THEORY IS INVALID\n");
      }else{
         printf("THEORY HOLDS\n");
      }
   }
   
   return 0;
}
