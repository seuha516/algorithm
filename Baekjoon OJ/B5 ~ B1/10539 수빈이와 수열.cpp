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
	int hap=0;
	for(int i=1;i<=n;i++){
		int x;scanf("%d",&x);
		printf("%d ",x*i-hap);
		hap+=x*i-hap;
	}
	
	return 0;
}


