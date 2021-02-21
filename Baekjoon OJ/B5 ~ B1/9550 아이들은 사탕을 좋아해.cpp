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
	
	int t;scanf("%d",&t);
	while(t--){
		int n,k; scanf("%d %d",&n,&k);
		vector <int> v; int dap=0;
		while(n--){
			int x;scanf("%d",&x);dap+=(x/k);
		}	
		printf("%d\n",dap);
	}
	
   
	return 0;
}


