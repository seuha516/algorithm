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
	
	int t; scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		printf("Pairs for %d: ",n);
		int xx;
		if(n%2==0){
			xx=n/2-1;
		}else xx=n/2;
		for(int i=1;i<=xx;i++){
			printf("%d %d",i,n-i);
			if(i!=xx)printf(", ");
		}
		printf("\n");
	}
	
	
	return 0;
}

