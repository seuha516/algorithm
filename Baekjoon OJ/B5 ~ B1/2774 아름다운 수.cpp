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
#include <stack>
using namespace std;

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		int x;scanf("%d",&x);
		
		bool ok[10]={0,};
		
		while(x){
			ok[x%10]=1;
			x/=10;
		}
		int dap=0;
		for(int i=0;i<10;i++){
			dap+=ok[i];
		}
		printf("%d\n",dap);
	}
	
return 0;}

