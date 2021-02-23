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

double fx(vector<double>rPtn,double x){
	double ret=0.0;
	for(int i=0;i<rPtn.size();i++){
		ret+=pow(x,rPtn.size()-1-i)*rPtn[i];
	}
	return ret;
}

double find(vector<double>rPtn,double st,double end,int deep){
	
	if(deep==100)return st;
	
	if(fx(rPtn,st)*fx(rPtn,end)>0) return -9999.0;
	if(fx(rPtn,st)>0) return find(rPtn,end,st,deep);
	
	double mid=(st+end)/2;
	if(fx(rPtn,mid)>0){
		return find(rPtn,st,mid,deep+1);
	}else{
		return find(rPtn,mid,end,deep+1);
	}
	
	
}

vector<double> alqns(vector<double>rPtn){
	vector<double> ret;
	for(int i=0;i<rPtn.size()-1;i++){
		ret.push_back((rPtn.size()-1-i)*rPtn[i]);
	}
	return ret;
}

vector<double> go(vector<double> v,int n){
	
	vector<double> ret;
	
	if(n==2){
		double bb4ac=v[1]*v[1]-4*v[0]*v[2];
		ret.push_back((0-v[1]+sqrt(bb4ac))/(2*v[0])); ret.push_back((0-v[1]-sqrt(bb4ac))/(2*v[0]));
	}else{
		vector<double>rmrrkqt;
		rmrrkqt=go(alqns(v),n-1);
		rmrrkqt.insert(rmrrkqt.begin(),-999); rmrrkqt.insert(rmrrkqt.end(),999);
		for(int i=1;i<rmrrkqt.size();i++){
			double temp=find(v,rmrrkqt[i-1],rmrrkqt[i],0);
			if(temp>-9997.0) ret.push_back(temp);
		}				
	}
	sort(ret.begin(),ret.end());
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int n;
		scanf("%d",&n);
		vector<double> v;
		 
		for(int i=0;i<=n;i++){
			double x; scanf("%lf",&x);
			v.push_back(x);	
		}	
		
		vector<double> dap=go(v,n);
		
		for(int i=0;i<dap.size();i++){
			printf("%.10lf ",dap[i]);
		}printf("\n");
		
	}
	
	return 0;
}
