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

int jari(long long a){
   int n=0;
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
	
	long long n; scanf("%d",&n);
	int j=jari(n);
	
	long long dap=0;
	
	for(int i=1;i<j;i++){
		dap+=i*9*intpow(10,i-1);
		dap%=1234567;
	}dap+=j*(n-intpow(10,j-1)+1);
	
	
	printf("%lld",dap%1234567);
	
	return 0;
}




