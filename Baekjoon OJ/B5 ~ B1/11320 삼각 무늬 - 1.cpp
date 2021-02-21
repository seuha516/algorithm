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
	
	int t; scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		int a,b; scanf("%d %d",&a,&b);
		int t=a/b;
		printf("%d\n",t*t);
	}
	
	return 0;
}
