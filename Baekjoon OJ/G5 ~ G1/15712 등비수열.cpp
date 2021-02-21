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
#include <stack>
#define E 1000000009

using namespace std;

long long a,r,n,mod;

long long sq(long long rr,long long x,long long mmod){
	long long val=1; long long temp=rr; long long xx=x;
	while(x){
		if(x%2==1) val=((val%mmod)*(temp%mmod))%mmod;
		temp=((temp%mmod)*(temp%mmod))%mmod;
		x/=2;
	}
	return val;
}

long long go(long long end){
	if(end==0)return 1;
	long long dap=0;
	if(end%2==0){
		dap+=sq(r,end,mod);
		end--;
	}
	long long t1=(sq(r,(end/2+1),mod)+1)%mod;
	t1=(t1*(go(end/2)%mod))%mod;
	long long retval=(t1+dap)%mod;
	return retval;
}

int main(){
		
	scanf("%lld %lld %lld %lld",&a,&r,&n,&mod);
	
	if(r==1){
		printf("%lld",((a%mod)*(n%mod))%mod);
	}else if(n==1){
		printf("%lld",a%mod);
	}else{
		printf("%lld",((a%mod)*(go(n-1)%mod))%mod);	
	}
	
	return 0;
}



