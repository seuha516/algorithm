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

using namespace std;

int scan(int x,int y,int x2,int y2,int a,int b,int r){
	
	int t=0;
	if(abs(x-a)*abs(x-a)+abs(y-b)*abs(y-b)<r*r){
		t++;
	}
	if(abs(x2-a)*abs(x2-a)+abs(y2-b)*abs(y2-b)<r*r){
		t++;
	}
	if(t==1){
		return 1;
	}else{
		return 0;
	}
	
}
	
int main(){	
	
	int testcase; scanf("%d",&testcase);
	
	while(testcase--){
		
		int x1,y1,x2,y2;scanf("%d %d %d %d",&x1,&y1,&x2,&y2);		
		int n; scanf("%d",&n);		
		int dap=0;
		
		while(n--){
			int a,b,r;scanf("%d %d %d",&a,&b,&r);
			dap+=scan(x1,y1,x2,y2,a,b,r);
		}
		printf("%d\n",dap);
	}
	
	return 0;
}



