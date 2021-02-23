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
		
	int t;scanf("%d",&t);while(t--){
		int x;scanf("%d",&x); int dap=0;
		
		for(int i=1;i<=sqrt(x);i++){
			if(x%i!=0)continue;
			int a=i; int b=x/i;
			if(gcd(a,b)==1)dap++;
		}
		printf("%d\n",dap);
	}

return 0;}


