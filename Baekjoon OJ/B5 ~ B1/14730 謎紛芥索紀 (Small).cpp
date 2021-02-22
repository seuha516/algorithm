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

int main(){	

	int n; scanf("%d",&n);
	int t=0;
	while(n--){
		int a,b; scanf("%d %d",&a,&b);
		t+=a*b;
	}
	printf("%d",t);
	
	return 0;
}


