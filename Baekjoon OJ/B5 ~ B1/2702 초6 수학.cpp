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
	
	int t;scanf("%d",&t);
	while(t--){
		int x,y;scanf("%d %d",&x,&y);
		printf("%d %d\n",x*y/gcd(x,y),gcd(x,y));		
	}
	
	return 0;
}


