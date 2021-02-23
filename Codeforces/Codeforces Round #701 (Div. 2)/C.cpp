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
		long long a,b; scanf("%lld %lld",&a,&b);
		long long dap=0;
		
		if(a<3){
			printf("0\n");continue;
		}
		
		long long limit;
		for(int i=1;i<=32000;i++){
			if(a<i*i-1){
				limit=i-1; break;
			}
		}
		
		if(b<limit){
			dap=b*(b-1)/2; printf("%lld\n",dap); continue;
		}else{
			dap=limit*(limit-1)/2;
		}
		
		long long temp=1;
		while(1){
			long long t=a/temp-1;
			if(t<=limit) break;
			dap+=min(t-limit,b-limit);
			temp++;			
		}
		
		printf("%lld\n",dap);
	}
	
	return 0;
}


