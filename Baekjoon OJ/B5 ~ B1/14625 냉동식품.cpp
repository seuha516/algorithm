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
	
	int a,b,c,d,n;scanf("%d %d %d %d %d",&a,&b,&c,&d,&n);
	int dap=0;
	while(1){
		
		int ttt=0;	
		if(a%10==n) ttt=1;
		if(a/10==n) ttt=1;
		if(b%10==n) ttt=1;
		if(b/10==n) ttt=1;
		dap+=ttt;
		
		b++; if(b>59){
			b-=60;a++;
		}
		if(a*100+b>c*100+d) break;
	}
	printf("%d",dap);
	
	return 0;
}


