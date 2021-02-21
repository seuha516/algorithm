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
	
	int t;
	scanf("%d",&t);

	int lev=1;
	while(1){
		if(t-lev<=0) break;
		t-=lev;
		lev++;	
	}
	lev++;
	printf("%d %d",lev-t,t);

	return 0;
}

