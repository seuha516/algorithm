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
	
	int tt=1;
	
	while(1){
		int x;scanf("%d",&x); if(x==0) break;
		
		int x1,x2,x3,x4;
		
		x1=3*x;
		if(x1%2==0){
			x2=x1/2;
		}else{
			x2=(x1+1)/2;
		}
		x3=x2*3;
		x4=x3/9;
		
		
		printf("%d. ",tt);
		if(x1%2==0){
			printf("even ");
		}else{
			printf("odd ");
		}
		printf("%d\n",x4);
		
		tt++;
	}

	return 0;
}



