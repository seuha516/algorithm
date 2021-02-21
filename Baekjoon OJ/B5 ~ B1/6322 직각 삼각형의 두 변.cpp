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

int main(){
	int x=1;
	while(1){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0) break;
		
		double dap;
		char ooo;
		if(a==-1){
			ooo='a';
			dap=sqrt(c*c-b*b);
			if(b>=c)dap=-1;
		}
		if(b==-1){
			ooo='b';
			dap=sqrt(c*c-a*a);
			if(a>=c)dap=-1;
		}
		if(c==-1){
			ooo='c';
			dap=sqrt(a*a+b*b);
		}
		printf("Triangle #%d\n",x);
		if(dap==-1)printf("Impossible.\n\n");
		else printf("%c = %0.3lf\n\n",ooo,dap);
		x++;
		
	}
	return 0;
}

