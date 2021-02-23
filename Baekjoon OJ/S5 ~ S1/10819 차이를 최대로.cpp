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

vector <int> v;
int aaa[10];
int dap=-1;

void D(int n){
	
	if(v.size()==n){
		
		int temp[10]={0,};
		for(int i=1;i<=n;i++){
			temp[i]=aaa[v[i-1]];
		}
	
		int nnn=0;
		for(int i=1;i<=n-1;i++){
			nnn+=abs(temp[i]-temp[i+1]);
		}
		dap=max(dap,nnn);
		
		v.pop_back();
		return;
	}
	for(int i=1;i<=n;i++){
		if(v.size()==0){
			v.push_back(i);
		}else{
			int pass=0;
			for(int j=0;j<v.size();j++){
				if(i==v[j])pass=1;
			}
			if(pass)continue;
			v.push_back(i);
		}
		D(n);
	}
	if(v.size())v.pop_back();
	
	return;
}

int main(){
	
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",aaa+i);
	}
	D(n);
	printf("%d",dap);
	
	return 0;
}


