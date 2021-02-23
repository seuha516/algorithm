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

using namespace std;
long long jari(long long a){
   long long n=0;
   while(a){
      a/=10;n++;
   }
   return n;
}
long long intpow(long long a,int n){
   long long t=1;
   for(int i=0;i<n;i++){
      t*=a;
   }
   return t;
}
int main(){
	
	long long n; scanf("%lld",&n);
	
	long long j=jari(n);
	long long dap=0;
	dap+=j*(n-intpow(10,j-1)+1);

	for(long long i=1;i<=j-1;i++){
		dap+=i*9*intpow(10,i-1);
	}
	printf("%lld",dap);

		
	return 0;
}


