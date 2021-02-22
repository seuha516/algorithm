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
	
	long long n; scanf("%lld",&n); long long nn=n;
	if(n<10){
		printf("%lld",n); return 0;
	}
	long long x=1;
	while(nn){
		nn/=10; x*=10;
	}x/=10;
	long long a=n/x; long long b=n%x;	
	long long c=b/(x/10);
	if(c>=5){
		n=a*x+x;
	}else{
		n=a*x;
	}
	
	printf("%lld",n); return 0;
	
    return 0;
}
