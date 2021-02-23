#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int mod=10000000;

int cache[105][105];

int go(int total, int first){
	if(cache[total][first]!=-1){return cache[total][first];}
	if(total==first) return 1;
	int &ret=cache[total][first];
	ret=0;
	for(int i=1;i<=total-first;i++){
		ret+=(((first + i - 1)%mod) * (go(total-first,i)%mod))%mod;
		ret%=mod;
	}
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		for(int i=0;i<105;i++){for(int j=0;j<105;j++){cache[i][j]=-1;}}
		
		int x; scanf("%d",&x);
		
		int dap=0;
		for(int i=1;i<=x;i++){
			dap+=go(x,i)%mod; dap%=mod;
		}
		printf("%d\n",dap);
	}	
	
    return 0;
}
