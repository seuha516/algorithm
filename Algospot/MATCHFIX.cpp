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

int n,m;
int capacity[200][200], flow[200][200];
bool network_flow(int source,int sink){
	memset(flow,0,sizeof(flow));
	int ret=0;
	while(1){
		vector<int> p(200,-1);
		queue<int> q;
		p[source]=source;
		q.push(source);
		while(!q.empty()&&p[sink]==-1){
			int now=q.front(); q.pop();
			for(int i=0;i<200;i++){
				if(capacity[now][i]-flow[now][i]>0 && p[i]==-1){
					q.push(i); p[i]=now;
				}
			}
		}
		if(p[sink]==-1) break;
		int input=987654321;
		for(int i=sink;i!=source;i=p[i]){
			input=min(input,capacity[p[i]][i]-flow[p[i]][i]);
		}
		for(int i=sink;i!=source;i=p[i]){
			flow[p[i]][i]+=input; flow[i][p[i]]-=input;
		}
		ret+=input;
	}
	for(int i=1;i<=n;i++){
		if(capacity[0][i]-flow[0][i]!=0) return 0;
	}
	for(int i=20;i<20+m;i++){
		if(capacity[0][i]-flow[0][i]!=0) return 0;
	}
	if(capacity[1][199]-flow[1][199]!=0) return 0;
	return 1;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		memset(capacity,0,sizeof(capacity));
		bool ok=0;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++){int x; scanf("%d",&x); capacity[0][i]=x;}
		for(int i=0;i<m;i++){
			int a,b; scanf("%d %d",&a,&b); 
			capacity[0][20+i]=capacity[20+i][a+1]=capacity[20+i][b+1]=1;
		}
		for(int i=1;i<1200;i++){
			capacity[1][199]=i;
			for(int j=2;j<=n;j++) capacity[j][199]=i-1;
			if(network_flow(0,199)){
				printf("%d\n",i); ok=1; break;
			}
		}
		if(!ok) printf("-1\n");
	}
	
	return 0;
}

