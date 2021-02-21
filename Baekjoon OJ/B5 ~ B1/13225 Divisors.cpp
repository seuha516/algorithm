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
	
	int t;
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
		
		int x;scanf("%d",&x);
		
		int dap=0;
		for(int j=1;j<=sqrt(x);j++){
			if(x%j==0){
				if(x/j==j){
					dap++;
				}else{
					dap++; dap++;
				}
			}
		}
		
		printf("%d %d\n",x,dap);
	}
	return 0;
}


