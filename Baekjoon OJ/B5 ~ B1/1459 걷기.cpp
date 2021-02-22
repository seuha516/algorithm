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
	
	long long a,b,c,d;scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	
	a=abs(a); b=abs(b); long long t=min(a,b);  long long tt=max(a,b)-t;
	
	
	long long t1=(a+b)*c;
	long long t2=t*d + tt*c;
	long long t3=t*d + (tt/2)*2*d + (tt%2)*c;
	
	long long dap=min(t1,min(t2,t3));
	
	printf("%lld",dap);
		
	return 0;
}


