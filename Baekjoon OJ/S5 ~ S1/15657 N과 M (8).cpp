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

using namespace std;

int arr[10];

vector <int> v;
bool visit[10];

int pr(int n, int m){
		
	if(v.size()==m){
			for(int i=0;i<m;i++){
				printf("%d ",arr[v[i]]);
			}printf("\n");
			
			visit[v.back()]=false;
			v.pop_back();
				
			return 0;
		}	
	
	for(int i=0;i<n;i++){
		if(v.empty()){
			v.push_back(i);
		}else{
			if(v.back()<=i&&!visit[i]){
				v.push_back(i);
			}else{
				continue;
			}
		}
		pr(n,m);	
	}
	
	if(!v.empty()){
		visit[v.front()]=false;
		v.pop_back();
	}
	
	return 0;
}
	
	
int main(){	
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	
	sort(arr,arr+n);
	pr(n,m);
	
	
	return 0;
}

