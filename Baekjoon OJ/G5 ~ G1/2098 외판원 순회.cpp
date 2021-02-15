#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>

using namespace std;

int n;
long long dis[20][20];
long long cache[100000][20];
 
long long go(int visited,int past,int first){
	long long &ret=cache[visited][past];
	if(ret!=0) return ret;
	if(visited==(1<<n)-1) return dis[past][first];
	ret=987654321;
	for(int i=0;i<n;i++){
		if(visited&(1<<i)) continue;
		ret=min(ret,dis[past][i]+go(visited+(1<<i),i,first));
	}
	return ret;
}

int main(){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&dis[i][j]); 
			if(dis[i][j]==0) dis[i][j]=999999999;
		}
	}
	long long dap=987654321;
	for(int i=0;i<n;i++){
		memset(cache,0,sizeof(cache));
		dap=min(dap,go(1<<i,i,i));
	}
	cout<<dap;
	
	return 0;
}
