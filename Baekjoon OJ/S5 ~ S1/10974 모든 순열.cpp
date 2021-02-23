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

void D(int n){
	
	if(v.size()==n){
		for(int i=0;i<v.size();i++){
			printf("%d ",v[i]);
		}printf("\n");
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
	D(n);
	
	return 0;
}



