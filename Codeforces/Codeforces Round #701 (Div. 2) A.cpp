#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		int a,b; scanf("%d %d",&a,&b);
		int dap=987654321;
		
		if(b>32000){
			if(a<b) printf("1\n");
			else printf("2\n");
			continue;
		}
		for(int i=b;i<=32000;i++){
			if(i==1) continue;
			int temp=i-b;
			int A=a;
			while(A){
				A/=i; temp++;
			}
			dap=min(dap,temp);
		}
		printf("%d\n",dap);
		
	}
	
	return 0;
}


