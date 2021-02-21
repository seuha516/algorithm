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
	
	int m,n;scanf("%d %d",&m,&n);
	
	int total=n*m;
	
	int dap=0;

	int a=n; int b=m-1;
	
	while(1){
		
		total-=a;	
		dap++;
		if(total==0)break;
		total-=b;
		dap++;
		
		if(total==0)break;
		
		a--; b--;
		
		
	}
	printf("%d",dap-1);
	
	
	return 0;
}

