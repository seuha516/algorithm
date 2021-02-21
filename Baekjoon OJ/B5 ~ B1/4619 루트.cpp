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

using namespace std;

int main() {
	int m; int dap;
	while(1){
		int a,b; scanf("%d %d",&a,&b);
		if(a==0&&b==0){
			break;
		}
		dap=0; m=pow(2,30);
		for(int i=1;pow(i,b)<3000000;i++){
			int t=abs(a-pow(i,b));
			if(t<m){
				dap=i; m=t;
			}
		}
		printf("%d\n",dap);
	}
	return 0;
}
