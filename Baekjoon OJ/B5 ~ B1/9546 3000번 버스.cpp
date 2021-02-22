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
	
	int t;scanf("%d",&t);while(t--){
		int n;scanf("%d",&n);double dap=0;
		for(int i=0;i<n;i++){
			dap+=0.5; dap*=2;
		}
		printf("%0.0lf\n",dap);
	}
	
	return 0;
}

