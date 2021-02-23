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

priority_queue<long long,vector<long long>,greater<long long> > q;

int main(){
	
	long long n,m;scanf("%lld %lld",&n,&m);
	while(n--){
		long long x;scanf("%lld",&x);
		q.push(x);
	}
	while(m--){
		long long a,b; a=q.top(); q.pop(); b=q.top(); q.pop(); q.push(a+b); q.push(a+b);
	}
	long long dap=0;
	while(!q.empty()){
		dap+=q.top(); q.pop();
	}
	printf("%lld",dap);
	
	return 0;	
}


