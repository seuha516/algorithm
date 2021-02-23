#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>
#include <random>
#include <map>
using namespace std;

vector<pair<int,int>>v; map<pair<int,int>,int>mp;

int dis(pair<int,int>a,pair<int,int>b){
	return (a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second);
}


int main(){
	
	int n; scanf("%d",&n);int nn=n;
	while(n--){
		int a,b;scanf("%d %d",&a,&b);v.push_back(pair<int,int>(a,b));
	}sort(v.begin(),v.end());
	
	int d=dis(v[0],v[1]);
	
	mp[pair<int,int>(v[0].second,v[0].first)]=1;
	mp[pair<int,int>(v[1].second,v[1].first)]=1;
	
	int last=0;
	
	for(int i=2;i<nn;i++){
		
		while(last<i){
			int dx=v[i].first-v[last].first;
			if(dx*dx<=d) break;	
			mp.erase(pair<int,int>(v[last].second,v[last].first));
			last++;	
		}
		
		auto low=mp.lower_bound(pair<int,int>(v[i].second-sqrt(d),-1000001));
		auto upp=mp.upper_bound(pair<int,int>(v[i].second+sqrt(d),1000001));	
		
		for(auto it=low;it!=upp;it++){
			d=min(d,dis({it->first.second,it->first.first},v[i]));
		}
		
		mp[pair<int,int>(v[i].second,v[i].first)]=1;
		
	}
	
	printf("%d",d);
	
	
return 0;}



