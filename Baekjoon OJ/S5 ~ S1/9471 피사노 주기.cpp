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
	
	int t;scanf("%d",&t);
	while(t--){
		
		int n,m; scanf("%d %d",&n,&m);
		
		if(m==2){
			printf("%d %d\n",n,3); continue;
		}
		
		int t0=0; int t1=1;
		
		int i;
		for(i=1;1;i++){
			t0=(t0+t1)%m;
			t1=(t0+t1)%m;
			if(t0==0&&t1==1){
				break;
			}		
		}
		printf("%d %d\n",n,2*i);
		
	}

	return 0;
}



