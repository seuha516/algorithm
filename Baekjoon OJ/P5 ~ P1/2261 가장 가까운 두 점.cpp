#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<int,int>>v;
map<pair<int,int>,int> mp;

int dis(pair<int,int>a,pair<int,int>b){
	return (a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second);
}
bool comp1(const pair<int,int> &a,const pair<int,int> &b){
	return a.first<b.first;
}
bool comp2(const pair<int,int> &a,const pair<int,int> &b){
	return a.second<b.second;
}

int main(){
	
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;scanf("%d %d",&a,&b); v.push_back(pair<int,int>(a,b));
	}sort(v.begin(),v.end());
	
	int d=dis(v[0],v[1]);
	mp[pair<int,int>(v[0].second,v[0].first)]=1;
	mp[pair<int,int>(v[1].second,v[1].first)]=1;
	
	int last=0;
	for(int i=2;i<n;i++){
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
	
	return 0;
}


