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

int main(){
	
	int t;scanf("%d",&t);
	
	while(t--){
		int n;scanf("%d",&n);
		int nn=n;
		n=n*(n+1)/2;n++;
		int x=nn*(nn+1)/2;
		printf("%d\n",n-x);
	}
	
	return 0;
}



