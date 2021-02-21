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
	
	int n;scanf("%d",&n); 

	while(n--){
		
		int p,k;scanf("%d %d",&p,&k);
		
		bool ok[502]={false,};
		int d=0;
		
		for(int i=0;i<p;i++){
			int x;scanf("%d",&x);
			if(ok[x]){
				d++;	
			}else{
				ok[x]=1;
			}
		}
		printf("%d\n",d);
		
	}
	
	return 0;
}

