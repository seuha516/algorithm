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
	
	int n,m; scanf("%d %d",&n,&m);
	
	if(n<3||m<3||(n*m)%3!=0){
		printf("NO");
	}else{
		printf("YES");
	}
	return 0;
}


