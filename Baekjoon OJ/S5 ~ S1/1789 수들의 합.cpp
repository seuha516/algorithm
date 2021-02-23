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

using namespace std;
int main(){
	
	long long x;scanf("%lld",&x);
	
	x*=2;long long i;
	for(i=1;1;i++){
		if(i*i+i>x) break;
	}
	printf("%lld",i-1);	
	
	
	return 0;
}

