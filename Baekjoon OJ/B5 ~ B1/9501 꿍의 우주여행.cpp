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
	
	int t;scanf("%d",&t);
	while(t--){
		int n,d; scanf("%d %d",&n,&d);int dap=0;
		for(int i=0;i<n;i++){
			int a,b,c;scanf("%d %d %d",&a,&b,&c); 
			if(d*c<=b*a){
				dap++;
			
			}
		}
		printf("%d\n",dap);
	}
   
	return 0;
}


