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
	
	int t;scanf("%d",&t);
	while(t--){
		int dap=0; int n; scanf("%d",&n);
		for(int i=2;i<n+1;i++){
			int t=0;int temp=n;
			while(1){
				
				if(temp%i==0){
					t++; temp/=i;
				}else{
					break;
				}
			}
			
			dap+=t;
		}
		
		printf("%d\n",dap);
	}
		
	return 0;
}


