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
	
	int n;scanf("%d",&n);int dap=-1;
	
	int past=1<<30;
	int low=1<<30;
	int ok=0;
	while(n--){
		int b; scanf("%d",&b);
		if(!ok){
			ok=1;past=b;low=b;continue;
		}
		
		if(b>past){
			
		}else{
			dap=max(dap,past-low);
			low=b;
		}
		past=b;
	}
			dap=max(dap,past-low);
	if(dap==-1)dap=0;
	printf("%d",dap);
	
	
	return 0;
}

