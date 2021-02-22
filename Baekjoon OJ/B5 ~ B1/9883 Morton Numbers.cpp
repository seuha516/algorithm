#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	
	long long a, b; scanf("%lld %lld",&a,&b);
	
	long long t=1; long long x=0;
	
	while(a+b){
		x+=(b%2)*t;
		t*=2;
		x+=(a%2)*t;
		t*=2;
		a/=2; b/=2;
	}
	
	printf("%lld",x);
	
    return 0;
}
