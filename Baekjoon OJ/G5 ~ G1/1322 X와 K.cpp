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
#include <stack>

using namespace std;

long long x_64bit[64];
long long k_64bit[64];
vector <int> v;

int main(){
	
	long long x,k; scanf("%lld %lld",&x,&k);
	
	long long ccc=0;
	while(x){
		x_64bit[ccc++]=(x%2)*7;
		x/=2;
	}
	
	for(int i=0;i<64;i++){
		if(x_64bit[i]==0){
			v.push_back(i);
		}
	}
	ccc=0;
	while(k){
		if(k%2==1) x_64bit[v[ccc]]=1;
		k_64bit[ccc++]=k%2;
		k/=2;
	}
	
	for(int i=63;i>=0;i--){
		if(x_64bit[i]==7) x_64bit[i]=0;
	}
	
	long long dap=0;
	for(int i=63;i>=0;i--){
		dap*=2;
		if(x_64bit[i]){
			dap+=1;
		}
	}
	printf("%lld",dap);
		
	return 0;
}


