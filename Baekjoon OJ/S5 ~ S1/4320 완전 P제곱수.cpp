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

long long intpow(long long a,int n){
   long long t=1;
   for(int i=0;i<n;i++){
      t*=a;
   }
   return t;
}

int main(){
	
	while(1){
		long long x; scanf("%lld",&x); if(x==0) break;
	
		int minus=0;
		
		if(x<0){
			 x*=(-1); minus=1;
		}
		
		long long xx=x; long long t=0; double xxx=x;
		while(xx){
			xx/=2; t++;
		}
		
		for(long long i=t;i>=1;i--){
			if(minus){
				if(i%2==0) continue;
			}
			
			double soo=pow(xxx,1/(double)i);
			
			
			long long res=soo;
			if(intpow(res,i)==x){
				printf("%lld\n",i); break;
			}
			if(intpow(res+1,i)==x){
				printf("%lld\n",i); break;
			}
			
		}	
	}
		
	return 0;
}



