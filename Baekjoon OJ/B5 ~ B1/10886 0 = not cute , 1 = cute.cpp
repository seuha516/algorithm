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
	
	int n;scanf("%d",&n);
	int d=0;

	while(n--){
		int a;scanf("%d",&a);
		if(a==0)a--;
		d+=a;
	}
	if(d>0){
		printf("Junhee is cute!");
	}else{
		printf("Junhee is not cute!");
	}

	return 0;
}


