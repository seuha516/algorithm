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
#include <stack>

using namespace std;

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int dap=0;
		for(int i=1;1;i++){
			if(n-i-(i*i)<0){
				dap=i-1; break;
			}
			
		}
		printf("%d\n",dap);
	}
		
	return 0;
}




