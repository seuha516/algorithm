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
	
	int n,m; scanf("%d %d",&n,&m);
	
	int a[305][305];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k; scanf("%d",&k);
	
	for(int i=0;i<k;i++){
		int t1,t2,t3,t4; scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
		
		int dap=0;
		
		for(int x=t1-1;x<=t3-1;x++){
			for(int y=t2-1;y<=t4-1;y++){
				dap+=a[x][y];
			}
		}
		printf("%d\n",dap);
	}
	
	return 0;
}



