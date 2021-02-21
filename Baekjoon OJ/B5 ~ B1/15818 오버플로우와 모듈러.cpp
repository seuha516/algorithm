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
	
	long long n,m;scanf("%lld %lld",&n,&m);
	long long t=1;
	while(n--){
		long long x;scanf("%lld",&x);
		t*=x; t%=m;
	}
	printf("%lld",t);
	
	return 0;
}


