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

using namespace std;

int n; //초소의 개수 
vector<pair<double,double> > ran;
const double pi=2.0*acos(0);
int line(double st,double end);
int circle(){
	int res=987654321;
	for(int i=0;i<n;i++){
		if(ran[i].first <= 0 || ran[i].second >= 2*pi){
			double st=fmod(ran[i].second,2*pi);
			double end=fmod(ran[i].first+2*pi,2*pi);
			res=min(res,1+line(st,end));			
		}
	}
	return res;
}

int line(double st,double end){
	int used=0, idx=0;
	while(st<end){
		double maxend=-1;
		while(idx<n&&ran[idx].first<=st){
			maxend=max(maxend,ran[idx].second);idx++;	
		}
		if(maxend==-1)return 987654321;
		st=maxend;
		used++;
	}
	return used;
}
int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		while(!ran.empty())ran.pop_back();
		
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			double x,y,r;
			scanf("%lf %lf %lf",&x,&y,&r);
			
			double rad=fmod(2*pi+atan2(y,x),2*pi); //초소의 위치 각도 (-180 ~ 180)			
			double cha=asin(r/16.0)*2.0; //초소의 경계범위 +- 각도 
			double st=rad-cha, end=rad+cha;
			
			ran.push_back(make_pair(st,end));
		}
		sort(ran.begin(),ran.end());
		int dap=987654321;
		
		dap=circle();
		
		if(dap<10000)printf("%d\n",dap);
		else printf("IMPOSSIBLE\n");
	}

	return 0;

}
