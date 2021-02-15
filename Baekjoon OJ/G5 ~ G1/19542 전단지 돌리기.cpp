#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

int n,s,d;

vector<int> v[100050];

int dis[100050];
int go(int x,int past){
	int ret=0;
	for(int i=0;i<v[x].size();i++){
		int next=v[x][i]; if(next==past) continue;
		ret=max(ret,1+go(next,x));
	}
	dis[x]=ret;
	return ret;
}

int main(){
	
	scanf("%d %d %d",&n,&s,&d);
	for(int i=0;i<n-1;i++){
		int x,y; scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	go(s,0);
	
	int dap=0;
	for(int i=1;i<n+1;i++){
		if(dis[i]>=d) dap++;
	}
	printf("%d",max(0,dap*2-2));
	
	return 0;
}
