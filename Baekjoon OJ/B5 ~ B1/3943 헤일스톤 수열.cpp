#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	int TC; scanf("%d",&TC);
	
	while(TC--){
	
		int n; scanf("%d",&n);
		
		int dap=n;
		if(n==3){
			printf("16\n"); continue;
		}else if(n<=4){
			printf("%d\n",n); continue;
		}
		
		while(n!=1){
			if(n%2==0){
				n/=2;
			}else{
				n*=3; n++;
			}
			dap=max(dap,n);
			
		}
		printf("%d\n",dap);
	}
    return 0;
}

