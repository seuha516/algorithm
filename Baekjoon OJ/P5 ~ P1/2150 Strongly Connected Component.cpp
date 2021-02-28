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

int dap;
int v,e; 

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
			if(t<=v) dap=max(dap,ssc_cnt);
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
	
	scanf("%d %d",&v,&e);
	adj.resize(v+10);
	for(int i=0;i<e;i++){
		int a,b; scanf("%d %d",&a,&b);
		adj[a].push_back(b);
	}
	tarjan_ssc();
	printf("%d\n",dap);
	bool used[10001]={0,};
	for(int i=1;i<=v;i++){
		if(used[i]) continue;
		int temp=ssc_id[i];
		for(int j=1;j<=v;j++){
			if(temp==ssc_id[j]){
				used[j]=1;
				printf("%d ",j);
			}
		}
		printf("-1\n");
	}
		
	return 0;
}


