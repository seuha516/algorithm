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

long long intpow(long long a,int n){
   long long t=1;
   for(int i=0;i<n;i++){
      t*=a;
   }
   return t;
}
int main(){
	int n;scanf("%d",&n); int dap=0;
	while(n--){
		int x;scanf("%d",&x);
		dap+=intpow(x/10,x%10);
	}printf("%d",dap);	
	return 0;
}
