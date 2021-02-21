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
		int a,b; scanf("%d %d",&a,&b); if(a==0&&b==0) break;
		
		
		int arr[13]={0,};
		
		int dap=0;
		int t=0;
		for(int i=0;i<13;i++){
			
			if(a%10+b%10+t>=10){
				dap++; t=1;
			}else{
				t=0;
			}
			
			a/=10; b/=10;
		}
		
		printf("%d\n",dap);
		
	}
	return 0;
}


