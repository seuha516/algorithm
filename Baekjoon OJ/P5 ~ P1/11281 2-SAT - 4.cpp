#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

vector<vector<int>> adj;

vector<int> ssc_id; //-1로 초기화 
stack<int> ssc_st;
vector<int> discovered; //-1로 초기화 
int dis_cnt,ssc_cnt,vertex_cnt;
int ssc(int now){
	int ret=discovered[now]=vertex_cnt++;
	ssc_st.push(now);
	for(int i=0;i<adj[now].size();i++){
		int next=adj[now][i];
		if(discovered[next]==-1){
			ret=min(ret,ssc(next));
		}else if(ssc_id[next]==-1){
			ret=min(ret,discovered[next]); 
		}
	}
	if(ret==discovered[now]){
		while(1){
			int t=ssc_st.top(); ssc_st.pop();
			ssc_id[t]=ssc_cnt;
			if(t==now) break;
		}
		ssc_cnt++;
	}
	return ret;
}
vector<int> tarjan_ssc(){
	while(!ssc_st.empty()) ssc_st.pop();
	ssc_id=discovered=vector<int>(adj.size(),-1);
	dis_cnt=ssc_cnt=vertex_cnt=0;
	for(int i=0;i<adj.size();i++){
		if(discovered[i]==-1) ssc(i);
	}
	return ssc_id;
}

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
	if(a.first==b.first) return a.second<b.second;
	return a.first>b.first;
}
vector<int> solve_2sat(){
	int n=adj.size()/2;
	vector<int> result=tarjan_ssc();
	for(int i=0;i<2*n;i+=2){
		if(result[i]==result[i+1]) return vector<int>();
	}
	vector<int> val(2*n,-1);
	vector<pair<int,int>> order;
	for(int i=0;i<2*n;i++){
		order.push_back({result[i],i});
	}
	sort(order.begin(),order.end(),cmp);
	for(int i=0;i<2*n;i++){
		int vertex=order[i].second;
		int var=vertex/2, istrue=(vertex%2==0?1:0);
		if(val[var]!=-1) continue;
		val[var]=1-istrue;
	}
	return val;
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	adj.resize(4*n);
	
	for(int i=0;i<m;i++){
		int a,b; scanf("%d %d",&a,&b);
		if(a<0&&b<0){
			a*=(-1); b*=(-1);
			adj[a*2].push_back(b*2+1);
			adj[b*2].push_back(a*2+1);
		}else if(a<0&&b>0){
			a*=(-1);
			adj[a*2].push_back(b*2);
			adj[b*2+1].push_back(a*2+1);
		}else if(a>0&&b<0){
			b*=(-1);
			adj[a*2+1].push_back(b*2+1);
			adj[b*2].push_back(a*2);
		}else if(a>0&&b>0){
			adj[a*2+1].push_back(b*2);
			adj[b*2+1].push_back(a*2);
		}
	}	
	
	vector<int> res=solve_2sat();
		
	if(res.empty()){
		printf("0"); return 0;
	}
	printf("1\n");
	
	for(int i=1;i<=n;i++){
		if(res[i]) printf("1 ");
		else printf("0 ");
	}
	
	
	return 0;
}

