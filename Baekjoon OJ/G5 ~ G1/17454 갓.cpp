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
	
	int t;scanf("%d",&t);
	while(t--){
		long long a,b,c,d,e,f; scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
		
		if(c>=d||e>=f){
			printf("GOD\n"); continue;
		}
		
		long long t1=d; long long t2=f;
		
		c*=t2; d*=t2; e*=t1; f*=t1;
		
		if(c+e>max(d,f)){
			printf("GOD\n");
		}else{
			printf("KDH\n");
		}
	}

	return 0;
}

