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

int capacity[700][700], flow[700][700];
int network_flow(int source,int sink){
	memset(flow,0,sizeof(flow));
	int ret=0;
	while(1){
		vector<int> p(700,-1);
		queue<int> q;
		p[source]=source;
		q.push(source);
		while(!q.empty()&&p[sink]==-1){
			int now=q.front(); q.pop();
			for(int i=0;i<700;i++){
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
	return ret;
} 


int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		int t; scanf("%d",&t);
		for(int j=0;j<t;j++){
			int x; scanf("%d",&x);
			capacity[687][i]=capacity[i][x+221]=capacity[x+221][688]=1;
		}
	}
	printf("%d",network_flow(687,688));
	
	return 0;
}

