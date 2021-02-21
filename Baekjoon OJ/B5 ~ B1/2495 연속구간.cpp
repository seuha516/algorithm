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
#include <functional>

using namespace std;

int main(){
	
	int t=3;
	while(t--){
		char c[9]={0,};
		scanf("%s",c);
		int temp=0; int dap=0;
		for(int i=1;i<8;i++){
			if(c[i]==c[i-1]){
				temp++;
			}else{
				dap=max(dap,temp); temp=0;
			}
		}
		dap=max(dap,temp);
		printf("%d\n",dap+1);
	}
	
	return 0;
}


