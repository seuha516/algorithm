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

	int n;scanf("%d",&n);
	while(n--){
		char c[25]={0,}; scanf("%s",c);
		int dap=0;
		for(int i=0;i<24;i++){
			dap*=2;
			dap+=c[i]-48;
		}
		printf("%d\n",dap);
	}
	
	
	return 0;
}


