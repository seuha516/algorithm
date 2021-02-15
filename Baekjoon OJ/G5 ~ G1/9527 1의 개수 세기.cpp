#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

long long go(long long x){
	x++;
	long long ret=0;
	long long temp=2;
	while(temp<=3*x){
		ret+=(x/temp)*(temp/2);
		if(x%temp>temp/2) ret+=(x%temp)-(temp/2);
		temp*=2;
	}
	return ret; 
}

int main(){
	long long a,b; scanf("%lld %lld",&a,&b);
	printf("%lld",go(b)-go(a-1));
	
	return 0;
}
