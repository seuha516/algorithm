#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

long long n,m; 

bool go(long long x){
	long long now=m*100/n;
	long long next=(m+x)*100/(n+x);
	return next>now;
}

long long find(long long st,long long end){
	long long mid=(st+end)/2;
	if(st==end)return st;
	if(go(mid)==0){
		return find(mid+1,end);
	}else return find(st,mid);
	
}
int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		scanf("%lld %lld",&n,&m);
		long long dap=find(0,55000000001);
		if(dap>=2000000001) dap=-1;
		printf("%lld\n",dap);
	}
	
	return 0;
}
