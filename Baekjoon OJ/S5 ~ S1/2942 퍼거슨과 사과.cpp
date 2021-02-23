#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

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

int main() {
	
	int a,b; scanf("%d %d",&a,&b);
	int t=gcd(a,b);
	int t1=a/t; int t2=b/t;
	
	for(int i=1;i<=sqrt(t);i++){
		if(t%i==0){
			if(i==t/i){
				printf("%d %d %d\n",i,a/i,b/i);
			}else{
				int xx=t/i;
				printf("%d %d %d\n",i,a/i,b/i);
				printf("%d %d %d\n",xx,a/xx,b/xx);
			}			
		}
	}
	
	return 0;
}
