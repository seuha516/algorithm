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

int n; int T[17]; int P[17]; int dap=0;

void go(int today,int won){
	
	if(today>n){
		dap=max(dap,won); return;
	}
	
	if(T[today]+today<=n+1){
		go(T[today]+today,won+P[today]);
	}
	go(today+1,won);
	
	return;
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",T+i,P+i);
	}
	go(1,0);
	printf("%d",dap);
	
	return 0;
}


