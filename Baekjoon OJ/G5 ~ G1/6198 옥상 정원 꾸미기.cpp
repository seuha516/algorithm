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

using namespace std;

int a,b;
int arr[101][101];
bool visit[101][101];
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
queue <pair<int,int> > q;
void BFS(){
	int aa=q.front().first; int bb=q.front().second;
	q.pop();
	
	for(int i=0;i<4;i++){
		int aaa=aa+x[i]; int bbb=bb+y[i];
		if(aaa<0||aaa>a-1||bbb<0||bbb>b-1){
			continue;
		}
		if(visit[aaa][bbb]||arr[aaa][bbb]==0){
			continue;
		}
		q.push(pair<int,int>(aaa,bbb)); visit[aaa][bbb]=1;
	}
	
	if(q.empty()) return;
	BFS(); 
}

priority_queue<long long, vector<long long>, greater<long long> > pq;

int main(){
	
	long long dap=0;
	
	long long n;scanf("%lld",&n);
	for(int i=0;i<n;i++){
		long long x;scanf("%lld",&x);
		if(i==0){
			pq.push(x);
			continue;
		}
		while(pq.top()<=x&&pq.size()){
			pq.pop();
		}
		dap+=pq.size(); 
		pq.push(x);
	}
	printf("%lld",dap);
	return 0;
}


