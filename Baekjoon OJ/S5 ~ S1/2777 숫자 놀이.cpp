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

vector <int> v;
int aa[8]={8,9,7,5,6,4,3,2};


int main(){	
	
	int n; scanf("%d",&n);
	
	while(n--){
		int t;scanf("%d",&t);
		
		int dap=0;
		
		if(t==1){
			printf("1\n"); continue;
		}
		
		for(int i=0;i<8;i++){
			while(t%aa[i]==0){
				t/=aa[i]; dap++;
			}
		}
		
		if(t!=1){
				printf("-1\n"); continue;
		}
		printf("%d\n",dap);
	}
	
	return 0;
}


