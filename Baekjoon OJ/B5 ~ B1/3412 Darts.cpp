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
	
	int tt; scanf("%d",&tt);
	while(tt--){
		int n;scanf("%d",&n);
		int dap=0;
		while(n--){
			int a,b;scanf("%d %d",&a,&b);
			int t=1;
			while(1){
				if(a*a+b*b<=t*20*t*20){
					break;
				}
				t++;
			}
			if(t>10){
				t=11;
			}
			dap+=11-t;
		}
		printf("%d\n",dap);
	}
		
	return 0;
}
 


