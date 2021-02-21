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

	int n; scanf("%d",&n);
	
	int dap=0;
	
	for(int i=1;i<=sqrt(n);i++){
		
		if(n%i==0){
			int t=i; int tt=n/i; 
			
			if((t+tt)%2==0){
				int aa=(t+tt)/2; int bb=(tt-t)/2;//printf("%d %d\n",aa,bb);
				if(aa>0&&bb>0&&aa>bb){
						dap++;
				}
			}
		}
	}
	printf("%d",dap);

	return 0;
}


