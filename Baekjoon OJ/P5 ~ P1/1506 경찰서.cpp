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
vector<bool> cut_v;
int dis_cnt,ssc_cnt,vertex_cnt;
int find_cut_v(int now,bool root){
	discovered[now]=dis_cnt++;
	int ret=discovered[now];
	int children=0;
	for(int i=0;i<adj[now].size();i++){
		int next=adj[now][i];
		if(discovered[next]==-1){
			children++;
			int subtree=find_cut_v(next,0);
			if(!root&&subtree>=discovered[now]) cut_v[now]=1;
			ret=min(ret,subtree);
		}else{
			ret=min(ret,discovered[next]);
		}
	}
	if(root) cut_v[now]=(children>=2);
	return ret;
}
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
	ssc_id=discovered=vector<int>(adj.size(),-1);
	ssc_cnt=vertex_cnt=0;
	for(int i=0;i<adj.size();i++){
		if(discovered[i]==-1) ssc(i);
	}
	return ssc_id;
}

int main(){
	
	int n; scanf("%d",&n); adj.resize(n);
	vector<int> v;
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	for(int i=0;i<n;i++){
		string s; cin >> s;
		for(int j=0;j<n;j++){
			if(s[j]=='1') adj[i].push_back(j);
		}
	}
	vector<int> res=tarjan_ssc();
	int dap[105]; for(int i=0;i<105;i++) dap[i]=987654321;
	
	for(int i=0;i<n;i++){
		dap[res[i]]=min(dap[res[i]],v[i]);
	}
	
	int ans=0;
	for(int i=0;i<105;i++) if(dap[i]<987654321) ans+=dap[i];
	printf("%d",ans);
	
	return 0;
}
