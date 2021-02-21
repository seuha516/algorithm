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
	
	long long n;scanf("%lld",&n);
	long long d=0;
	for(long long i=0;i<n;i++){
		for(long long j=0;j<n;j++){
			long long x;scanf("%lld",&x);
			d+=x;
		}
	}
	printf("%lld",d);
	
	return 0;
}

