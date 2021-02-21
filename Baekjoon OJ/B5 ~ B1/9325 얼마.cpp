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
		int s;scanf("%d",&s);
		int n;scanf("%d",&n);
		int d=0;d+=s;
		while(n--){
			int a,b;scanf("%d %d",&a,&b);
			d+=a*b;
		}
		printf("%d\n",d);
	}

	return 0;
}



