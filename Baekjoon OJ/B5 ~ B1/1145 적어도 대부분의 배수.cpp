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
	
	int a[6];scanf("%d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5]);
	
	int list[10]={123,124,125,134,135,145,234,235,245,345};
	
	int dap=1<<30;
	
	for(int i=0;i<10;i++){
		int t1=a[list[i]/100];
		int t2=a[list[i]/10 % 10];
		int t3=a[list[i]%10];
		
		int tt=gcd(t1,t2);
		tt=t1/tt*t2;
		int ttt=gcd(t3,tt);
		ttt=tt/ttt*t3;
		dap=min(dap,ttt);
		
	}
	printf("%d",dap);
	
	return 0;
}



