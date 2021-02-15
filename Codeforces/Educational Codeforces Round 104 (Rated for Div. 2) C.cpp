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
		int n; scanf("%d",&n);
		
		if(n&1){
			for(int i=n-1;i>=1;i--){
				for(int j=0;j<i;j++){
					if(j<n/2) printf("1 ");
					else printf("-1 ");
				}
			}
			printf("\n");
		}else{
			for(int i=n-1;i>=1;i--){
				for(int j=0;j<i;j++){
					if(j<n/2 - 1) printf("1 ");
					else if(j==n/2 - 1) printf("0 ");
					else printf("-1 ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}


