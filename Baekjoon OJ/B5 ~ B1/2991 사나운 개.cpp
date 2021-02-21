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

int main(){
	
	int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
	
	int t1=a+b; int t2=a;
	int t3=c+d; int t4=c;
	
	int x,y,z;scanf("%d %d %d",&x,&y,&z);
	
	int dap=0;
	if(--x%t1<t2){
		dap++;
	}
	if(x%t3<t4){
		dap++;
	}
	printf("%d\n",dap);
	
	dap=0;
	if(--y%t1<t2){
		dap++;
	}
	if(y%t3<t4){
		dap++;
	}
	printf("%d\n",dap);
	
	dap=0;
	if(--z%t1<t2){
		dap++;
	}
	if(z%t3<t4){
		dap++;
	}
	printf("%d\n",dap);
	

	return 0;
}

