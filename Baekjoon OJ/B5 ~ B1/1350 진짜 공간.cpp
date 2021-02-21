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


int main(){
	vector<long long>v;
	
	int t;scanf("%d",&t);long long ddd;
	
	while(t--){
		long long x;scanf("%lld",&x);
		v.push_back(x);	
	}scanf("%lld",&ddd);
	
	long long dap=0;
	for(int i=0;i<v.size();i++){
		long long xx=v[i];
		if(xx%ddd==0){
			dap+=xx/ddd;
		}else{
			dap+=xx/ddd + 1;
			
			
		}
	}
	
	printf("%lld",dap*ddd);
	
	return 0;
}


