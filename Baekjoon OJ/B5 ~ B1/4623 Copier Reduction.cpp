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

int min(int a,int b){
   if(a>b){
      return b;
   }else return a;
}

int main(){
	
	while(1){
		double a,b,c,d; scanf("%lf %lf %lf %lf",&a,&b,&c,&d); if(a+b+c+d==0) break;
		
		double x=min(c*100/a,d*100/b); double y=min(c*100/b,d*100/a);
		x=floor(x); y=floor(y); x=max(x,y); x=min(100,x);
		
		printf("%0.0lf%\n",x);
		
	}
	return 0;
}

