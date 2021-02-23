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

int dap1=1<<30;
int dap2=(-1)*(1<<30);
int aaa[12];
vector <int> giho;
vector <int> container;
bool ok[12];

void go(int n){
	int t=aaa[0];
	for(int i=0;i<n;i++){
		if(giho[container[i]]==0){
			t+=aaa[i+1];
		}else if(giho[container[i]]==1){
			t-=aaa[i+1];
		}else if(giho[container[i]]==2){
			t*=aaa[i+1];
		}else if(giho[container[i]]==3){
			t/=aaa[i+1];
		}
	}
	dap1=min(dap1,t);
	dap2=max(dap2,t);
}

void DP(int n){
	
	bool done[4]={0,};
	
	if(container.size()==n){
		go(n);
		ok[container.back()]=0; container.pop_back(); return;
	}
	
	for(int i=0;i<n;i++){
		if(container.size()==0){
			container.push_back(i); ok[container.back()]=1; done[giho[i]]=1; ok[i]=1;
		}else{
			if(ok[i]||done[giho[i]])continue;
			container.push_back(i); ok[container.back()]=1; done[giho[i]]=1; ok[i]=1;
		}
		DP(n);
	}
	
	if(container.size()==0) return;
	
	ok[container.back()]=0; container.pop_back(); 
	
}

int main(){
	
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",aaa+i);
	}
	int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
	for(int i=0;i<a;i++){
		giho.push_back(0);
	}
	for(int i=0;i<b;i++){
		giho.push_back(1);
	}
	for(int i=0;i<c;i++){
		giho.push_back(2);
	}
	for(int i=0;i<d;i++){
		giho.push_back(3);
	}
	DP(n-1);
	
	printf("%d\n%d",dap2,dap1);
	
	return 0;
}


