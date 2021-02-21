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

long long hap(long long n){
	return (n+1)*n/2;
}

int main(){	
	
	long long a;
	scanf("%d",&a);
	a/=3;
	long long d=0;
	
	printf("%lld",hap(a-2));

	return 0;
}
 

