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

int gcd(int a,int b){
   int w;
   while(b){
      w=a%b;
      a=b;
      b=w;
   }
   return a;
}

int main(){
	
	long long n;scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		long long a,b;scanf("%lld %lld",&a,&b);
		printf("%lld\n",a*b/gcd(a,b));
	}
	
	return 0;	
}



