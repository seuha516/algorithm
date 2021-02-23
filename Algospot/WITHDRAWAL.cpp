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

int n; int k;
vector<pair<int,int> > v;

bool can_over_x(double x){
	vector<double> temp;
	for(int i=0;i<n;i++){
		temp.push_back((double)v[i].second * x - (double)v[i].first);
	}sort(temp.begin(),temp.end());
	double hap=0;
	for(int i=0;i<k;i++){
		hap+=temp[temp.size()-1-i];
	}
	return (hap>=0.0);
}

double find(double st, double end,int deep){
	double mid=(st+end)/2.0;
	if(deep==100)return mid;
	if(can_over_x(mid)) return find(st,mid,deep+1);
	else return find(mid,end,deep+1);	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		//초기화
		v.clear();	
		
		//입력
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++){
			int a,b; scanf("%d %d",&a,&b);
			v.push_back(make_pair(a,b));
		}
	
		printf("%.20lf\n",find(0.0,1.0,0));
	}
	
	return 0;
}
