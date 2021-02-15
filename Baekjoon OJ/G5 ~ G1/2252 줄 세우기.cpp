#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	vector<int> v[32005];
	int in[32005]={0,};
	for(int i=0;i<m;i++){
		int a,b; scanf("%d %d",&a,&b);
		in[b]++;
		v[a].push_back(b);
	}
	
	queue<int> q;
	vector<int> dap;
	for(int i=1;i<=n;i++){
		if(in[i]==0) q.push(i);
	}
	
	while(dap.size()!=n){
		int now=q.front();
		dap.push_back(q.front()); q.pop();
		for(int i=0;i<v[now].size();i++){
			in[v[now][i]]--;
			if(in[v[now][i]]==0)q.push(v[now][i]);
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",dap[i]);
	}
	
	return 0;
}
