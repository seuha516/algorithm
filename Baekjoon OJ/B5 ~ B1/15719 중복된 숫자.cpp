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
	long long hap=0;
	long long n;scanf("%lld",&n);
		
		long long t=0;
	while(n--){
		long long x;scanf("%lld",&x);
		hap+=x; hap-=t; t++;
			}
	printf("%lld",hap);
	return 0;
}



