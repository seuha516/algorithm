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

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	
	long long dap=1; long long e=0;
	long long x=1; long long d=1;
	while(TC--){
		long long a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		d*=a; x*=b; e+=c;
		if((dap*x)%d==0){
			dap=dap*x/d; d=1; x=1;
		}
	}
	dap=dap*x/d;
	
	printf("%lld %lld",e%2,dap);

	return 0;
}


