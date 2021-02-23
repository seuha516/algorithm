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

int n,m;
vector<pair<double,double> > v1,v2;

double height(double x){
	double a1=-1.0,a2=-1.0,b1=-1.0,b2=-1.0;
	
	for(int i=0;i<n;i++){
		
		double x1,x2,y1,y2;
		
		x1=v1[i].first; y1=v1[i].second;
		if(i!=n-1) x2=v1[i+1].first;
		else x2=v1[0].first;
		if(i!=n-1) y2=v1[i+1].second;
		else y2=v1[0].second;
		
		if(x1>x2){
			swap(x1,x2); swap(y1,y2);
		}
		
		
		
		double temp;
		
		if(x1==x){
			temp=y1;
		}else if(x2==x){
			temp=y2;
		}else if(x1 < x && x < x2){
			temp=(y1*(x2-x) + y2*(x-x1))/(x2-x1);
		}else{
			continue;
		}
		if(a1<0){
			a1=temp;
		}else if(temp!=a1){
			a2=temp;
		}
		
	}
	for(int i=0;i<m;i++){
		
		double x1,x2,y1,y2;
		
		x1=v2[i].first; y1=v2[i].second;
		if(i!=m-1) x2=v2[i+1].first;
		else x2=v2[0].first;
		if(i!=m-1) y2=v2[i+1].second;
		else y2=v2[0].second;
		
		if(x1>x2){
			swap(x1,x2); swap(y1,y2);
		}
		
		double temp;
		
		if(x1==x){
			temp=y1;
		}else if(x2==x){
			temp=y2;
		}else if(x1 < x && x < x2){
			temp=(y1*(x2-x) + y2*(x-x1))/(x2-x1);
		}else{
			continue;
		}
		if(b1<0){
			b1=temp;
		}else if(temp!=b1){
			b2=temp;
		}
		
	}
	
	if(a1>a2)swap(a1,a2); if(b1>b2)swap(b1,b2);
	
	if(a1>b1){
		swap(a1,b1); swap(a2,b2);
	}
	
	if(a2<b1) return a2-b1;
	else if(a2>b2) return b2-b1;
	else return a2-b1;	
}

double find(double st,double end,int deep){
	if(deep==100)return st;
	
	double mid1=(st*2+end)/3;
	double mid2=(st+end*2)/3;
	
	if(height(mid1)<height(mid2)){
		return find(mid1,end,deep+1);
	}else{
		return find(st,mid2,deep+1);
	}
}


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		//초기화 
		v1.clear(); v2.clear();		
		double low1=2000.0, high1=-1000.0; double low2=2000.0, high2=-1000.0;
		
		//입력 
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			double x,y; scanf("%lf %lf",&x,&y); v1.push_back(make_pair(x,y));
			low1=min(low1,x); high1=max(high1,x);
		}
		for(int i=0;i<m;i++){
			double x,y; scanf("%lf %lf",&x,&y); v2.push_back(make_pair(x,y));
			low2=min(low2,x); high2=max(high2,x);
		}
		double low=max(low1,low2);
		double high=min(high1,high2);
		
		double ff=find(low,high,0);
		
		double dap=height(ff);
		if(dap<0)dap=0;
		
		printf("%.20lf\n",dap);
	}
	
	return 0;
}
