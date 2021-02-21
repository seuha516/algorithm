#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		long double dap=0;
		for(int i=1;i<=n;i++){
			dap+=log10l(i);
		}
		printf("%d\n",(int)dap + 1);
	}
		
	return 0;
}
