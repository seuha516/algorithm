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
	
	while(1){
		
		int dap=0;
		
		int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d); if(a+b+c+d==0) break;
		
		while(1){
			
			if(a==b&&b==c&&c==d){
				break;
			}
			int t1,t2,t3,t4;
			t1=abs(a-b); t2=abs(c-b); t3=abs(c-d); t4=abs(a-d);
			a=t1; b=t2; c=t3; d=t4;
			dap++;
		}
		printf("%d\n",dap);
		
	}

	return 0;
}



