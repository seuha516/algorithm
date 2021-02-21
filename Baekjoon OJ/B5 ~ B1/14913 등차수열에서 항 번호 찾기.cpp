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
	
int main(){	
	
	int dap=0;
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	dap=(c-a)/b + 1;
	if((c-a)%b!=0 || dap<=0){
		dap=-1;
	}

	if(dap==-1){
		printf("X");
	}else{
		printf("%d",dap);
	}
	
	return 0;
}


