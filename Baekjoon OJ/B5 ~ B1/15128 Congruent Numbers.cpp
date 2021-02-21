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
	
	long long a,b,c,d; scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	
	printf("%lld",((a*c)%(b*d*2)==0));
	
	
	return 0;
}


