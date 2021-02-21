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

int n,f;
int arr[12];
vector <int> v;
bool visit[12];

int dapok=-1;
vector <int> dap;

void go(){
	
	if(v.size()==n){
		
		int bbb[12]={0,};
		
		for(int i=0;i<v.size();i++){
			bbb[i]=v[i];
		}
		
		for(int i=n-1;i>=1;i--){
			for(int j=0;j<i;j++){
				bbb[j]=bbb[j]+bbb[j+1];
			}
		}
		
		if(bbb[0]==f&&dapok==-1){
			dapok=1;
			for(int i=0;i<v.size();i++){
				dap.push_back(v[i]);
			}
		}
		
		visit[v.back()]=0; v.pop_back(); 
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(v.empty()){
			v.push_back(i); visit[i]=1; go();
		}else{
			if(!visit[i]){
				v.push_back(i); visit[i]=1; go();
			}
		}
	}
	
	if(v.size()){
		visit[v.back()]=0; v.pop_back();
	}
	return;
	
}



int main(){
	
	scanf("%d %d",&n,&f);
	go();
	
	for(int i=0;i<dap.size();i++){
		printf("%d ",dap[i]);
	}
	
    return 0;
}

