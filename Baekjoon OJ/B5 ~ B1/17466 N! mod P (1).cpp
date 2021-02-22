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
	long long n,p; scanf("%lld %lld",&n,&p);
	long long t=1;
	
	for(int i=2;i<=n;i++){
		t*=i;
		t%=p;
	}
	printf("%lld",t);
	return 0;
}



