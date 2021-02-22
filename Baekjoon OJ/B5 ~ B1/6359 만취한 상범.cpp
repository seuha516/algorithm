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
	
	int n; scanf("%d",&n);
	while(n--){
		int x;scanf("%d",&x);
		
		bool open[105]={false,};
		
		for(int i=1;i<=x;i++){
			
			int t=i;
			while(t<=x){
				open[t]=!open[t];
				t+=i;
			}
		}
		int dap=0;
		for(int i=1;i<=x;i++){
			if(open[i])dap++;
		}
		printf("%d\n",dap);
		
	}
	
	return 0;
}


