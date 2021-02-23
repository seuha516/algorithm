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
	
	int n,s; scanf("%d %d",&n,&s);
	int dap;
	for(int i=0;i<n;i++){
		if(i==0){
			scanf("%d",&dap);dap=abs(s-dap);
		}else{
			int x; scanf("%d",&x);
			x=abs(s-x);
			dap=gcd(max(dap,x),min(dap,x));
		}
	}
	printf("%d",dap);
	
	return 0;
}


