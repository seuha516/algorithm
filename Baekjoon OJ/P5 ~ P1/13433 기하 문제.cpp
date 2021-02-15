#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

long double dis(long long a,long long b){
	return sqrtl((a+b)*(a+b)-(a-b)*(a-b));
}

int n; 
long long arr[10];
vector <int> v;
bool visit[10];
long double dap=1000000000000000000;

void DFS(){
	if(v.size()==n){
		long double temp[10]={0,};
		for(int i=1;i<v.size();i++){
			for(int j=0;j<i;j++){
				temp[i]=max(temp[i],temp[j]+dis(arr[v[j]],arr[v[i]]));
			}
		}
		dap=min(dap,temp[n-1]);
		visit[v.back()]=0; v.pop_back(); 		
		return;		
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			v.push_back(i); visit[i]=1; DFS();
		}	
	}
	if(v.empty()) return;
	visit[v.back()]=0; v.pop_back(); return;
}

int main() {
	scanf("%d",&n); 
	for(int i=0;i<n;i++) scanf("%lld",arr+i);
	sort(arr,arr+n);
	DFS();
	printf("%0.15Lf",dap);

	return 0;
}

