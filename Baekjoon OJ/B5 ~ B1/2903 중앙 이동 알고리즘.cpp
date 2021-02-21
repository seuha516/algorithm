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
	
	long long t=1;
	
	scanf("%lld",&t);
	
	long long tt=2;
	for(int i=1;i<=t;i++){
		tt*=2; tt--;
	}
	printf("%lld",tt*tt);

	return 0;
}
