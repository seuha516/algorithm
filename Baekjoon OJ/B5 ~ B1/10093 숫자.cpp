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

	long long x,y;scanf("%lld %lld",&x,&y);
	long long t;
	if(x==y) t=0;
	else if(x>y) t=x-y-1;
	else t=y-x-1;
	
	printf("%lld",t);
	
	if(x>y){
		long long w=y;
		y=x;
		x=w;
	}
	
	if(t==0) return 0;
	printf("\n");
	for(long long i=x+1;i<y;i++){
		printf("%lld ",i);
	}
	
	
	return 0;
}

