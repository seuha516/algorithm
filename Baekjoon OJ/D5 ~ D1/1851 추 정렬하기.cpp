#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

#define intmax 2147483647
#define LIMIT 10000

using namespace std;

long long dap;
long long value(int l,int m,int h){
	return (long long)h+(long long)m*((long long)l-2);
}

int main(){
	
	vector<int> v; 
	vector<pair<int,int> > sorted_v;
	vector<pair<pair<int,int>,int> > cycle;
	
	bool ok[100005]={0,};
	int original_location[100005]={0,};
	
	int n; scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x); sorted_v.push_back(make_pair(x,i));
	}
	sort(sorted_v.begin(),sorted_v.end());
	for(int i=0;i<n;i++){
		original_location[sorted_v[i].second]=i;
	}

	for(int i=0;i<n;i++){
		if(ok[i]) continue;
		int x=i; int minnum=-1; int len=0; int hap=0;
		while(1){
			ok[x]=1;
			len++;
			hap+=v[x];
			if(minnum==-1){
				minnum=v[x];
			}else{
				minnum=min(minnum,v[x]);
			}
			x=original_location[x];
			if(x==i){
				break;
			}
		}
		cycle.push_back(make_pair(make_pair(minnum,len),hap));
	}
	sort(cycle.begin(),cycle.end());
	
	for(int i=0;i<cycle.size();i++){
		int m=cycle[i].first.first; int l=cycle[i].first.second; int h=cycle[i].second;
	}
	
	int &m_0=cycle[0].first.first;
	int &l_0=cycle[0].first.second; 
	int &h_0=cycle[0].second;
	
	bool pass[100005]={0,};
	
	for(int i=cycle.size()-1;i>=1;i--){
		int m=cycle[i].first.first; int l=cycle[i].first.second; int h=cycle[i].second;
		if((long long)m*((long long)l-3)>(long long)m_0*((long long)l+1)){
			l_0+=l; h_0+=h; pass[i]=1; dap+=(long long)m_0+(long long)m;
		}
	}
	
	for(int i=0;i<cycle.size();i++){
		int m=cycle[i].first.first; int l=cycle[i].first.second; int h=cycle[i].second;
		if(!pass[i]){
			dap+=value(l,m,h);
		}
	}
	
	printf("%lld",dap);
	
	
	return 0;	
}

