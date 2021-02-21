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
	
	int n;scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		int a;scanf("%d",&a);
		int dap=0;
		for(int j=1;j<=a;j++){
			dap+=j*(j+1)*(j+2)/2;
		}
		printf("%d\n",dap);
		
	}
	
	return 0;
}
