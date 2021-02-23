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
	
	long long n; long long a,b,c,d,e,f;
	scanf("%lld %lld %lld %lld %lld %lld %lld",&n,&a,&b,&c,&d,&e,&f);
	
	long long t1,t2,t3;
	
	if(n==1){
		printf("%lld",a+b+c+d+e+f-max(a,max(b,max(c,max(d,max(e,f))))));
		return 0;
	}else if(n==2){
		t1=0;
		t2=4;
		t3=4;	
	}else{
		t1=(n-2)*(n-2)+4*(n*n-n-n-n+2);
		t2=(n-2)*4 + (n-1)*4;
		t3=4;
	}

	long long d1,d2,d3;
	
	d1=min(a,min(b,min(c,min(d,min(e,f)))));
	d2=min(a+b,min(a+c,min(a+d,min(a+e,min(b+c,min(b+d,min(b+f,
	   min(c+e,min(c+f,min(d+e,min(d+f,e+f)))))))))));
	d3=min(a+b+c,min(a+b+d,min(a+d+e,min(a+e+c,min(f+b+c,min(f+b+d,min(f+d+e,f+e+c)))))));
	
	printf("%lld",d1*t1+d2*t2+d3*t3);
	
	return 0;
}

