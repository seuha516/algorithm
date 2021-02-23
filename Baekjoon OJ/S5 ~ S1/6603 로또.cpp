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

using namespace std;

int arr[15];int n;

vector <int> v;

void DFS(){
	
	if(v.size()==6){
		for(int i=0;i<6;i++){
			printf("%d ",arr[v[i]]);
		}printf("\n");
		v.pop_back();
		return;
	}
	
	for(int i=0;i<n;i++){
		if(v.size()==0){
			v.push_back(i);
			DFS();
		}else{
			if(v.back()<i){
				v.push_back(i);
				DFS();
			}
		}
	}
	
	if(v.size()) v.pop_back();
	
	return;
	
}



int main(){
	
	while(1){
		scanf("%d",&n); if(n==0) break;
		for(int i=0;i<n;i++){
			scanf("%d",arr+i);
		}
		DFS();	
		printf("\n");
	}

	return 0;
}


