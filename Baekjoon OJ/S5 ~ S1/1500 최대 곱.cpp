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

int main(){
	
	long long s,k; scanf("%lld %lld",&s,&k);
	
	long long tt=s/k;
	long long cha=s-(tt*k);
	
	long long dap=1;
	for(int i=0;i<cha;i++){
		dap*=(tt+1);
	}
	for(int i=0;i<k-cha;i++){
		dap*=tt;
	}
	printf("%lld",dap);
			
	return 0;
}

