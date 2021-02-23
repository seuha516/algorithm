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

int n;
vector< pair<vec, double> > circle;

void go(vec st,vec dir,int level){
	
	if(level==100)return;
	
	int next_circle=-1;
	double meet=1e200;
	
	for(int i=0;i<n;i++){
		
		vec p_=(circle[i].first-st).shadow(dir)+st;
		double L=(p_-circle[i].first).length(); if(L > circle[i].second) continue;
		double route=(p_-st).length() - sqrt(circle[i].second*circle[i].second - L*L);
		double t=route / dir.length(); if(t<0.000001) continue;
		if((p_-st).dot(dir)<0)continue;
		
		if(meet > t){
			meet=t;
			next_circle=i;
		}
		
	}
	
	if(next_circle==-1) printf("\n");
	else{
		printf("%d ",next_circle);
		vec nextst=st+(dir*meet);
		vec mirror=nextst-circle[next_circle].first;
		go(nextst,dir - (dir.shadow(mirror)*2),level+1);			
	}
	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		circle.clear();
		double x,y,dx,dy;
		scanf("%lf %lf %lf %lf %d",&x,&y,&dx,&dy,&n);
		vec start(x,y);
		vec dir(dx,dy);
		
		for(int i=0;i<n;i++){
			double cx,cy,cr; scanf("%lf %lf %lf",&cx,&cy,&cr);
			circle.push_back(make_pair(vec(cx,cy),cr+1));	
		}
		go(start,dir,0);
	}
	
	return 0;
}
