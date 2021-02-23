#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,k; scanf("%d %d",&n,&k);
		if(n&1){
			if(k<=n/2) printf("%d\n",k);
			else{
				int t=(k-1)/(n/2);
				int x=t+k; 
				if(x%n==0)printf("%d\n",n);
				else printf("%d\n",x%n);
			}
		}else{
			if(k%n==0){
				printf("%d\n",n);
			}else printf("%d\n",(k%n));
		}
	}
	
	return 0;
}


