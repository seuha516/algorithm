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

double arr[10005];

int main(){
	
	int n;scanf("%d",&n);
	
	double dap=0;
	
	for(int i=1;i<=n;i++){
		double x; scanf("%lf",&x);
		arr[i]=max(arr[i-1]*x,x);
		dap=max(dap,arr[i]);
	}
	int tt=floor(dap*1000+0.5); dap=tt/(float)1000;
	printf("%0.3lf",dap);
	
	return 0;
}


